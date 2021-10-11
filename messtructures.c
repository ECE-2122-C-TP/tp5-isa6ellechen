//
// Created by Isabelle on 06/10/2021.
//

#include "messtructures.h"
#include <stdio.h>
/*Fonctions qui demande le nombre rationnel saisie
 * Paramètres :
 * INOUT : rien
 * IN :numerateur, denominateur
 * OUT:nr
 * */

struct NombreRationnel saisie(){
    struct NombreRationnel nr;
    printf("Saisissez un nombre rationnel:\n");
    scanf("%d", &nr.numerateur);
    printf("Saisissez un deuxieme nombre rationnel:\n");
    scanf("%d", &nr.denominateur);
    return nr;
}


/*Fonctions qui renvoie le nombre rationnel saisie
 * Paramètres :
 * INOUT : rien
 * IN :numerateur, denominateur
 * OUT:nr
 * */

void afficher(NR affiche){
    printf("numerateur=%.2f\t denominateur=%.2f\n", (float) affiche.numerateur, (float) affiche.denominateur);
}

int multiplier(NR nbr1, NR nbr2){
    NR nbr;
    nbr.numerateur = nbr1.numerateur * nbr2.numerateur;
    nbr.denominateur = nbr1.denominateur * nbr2.denominateur;
    return 0;
}

int additionner(NR nombre1, NR nombre2){
    NR nombre;
    nombre.numerateur = nombre1.numerateur * nombre2.denominateur + nombre2.numerateur * nombre1.denominateur;
    nombre.denominateur = nombre1.denominateur * nombre2.denominateur;
    return 0;
}

int pgcd(NR nbR1){
    int i;
    int tableauDeDiviseur[50]={0};
    int minNumerateurDenominateur;
    int plusGranddiviseur = 0;
    //on détermine le plus petit entre le numerateur et le denominateur
    if (nbR1.numerateur< nbR1.denominateur) {
        minNumerateurDenominateur = nbR1.denominateur;
    }
    else {
        minNumerateurDenominateur = nbR1.numerateur;
    }
    //on cherche les diviseurs communs qu'on stocke dans un tableau
    for (i = 1; i < minNumerateurDenominateur; i++) {
        if (nbR1.numerateur%i==0 && nbR1.denominateur%i==0) {
            tableauDeDiviseur[i] = i;
        }
        else{}
    }
    //on determine le plus grands entiers dans ce tableau
    for (i = 0; i < minNumerateurDenominateur ; i++) {
        if (tableauDeDiviseur[i]!=0){
            if(tableauDeDiviseur[i]<tableauDeDiviseur[i+1]){
                plusGranddiviseur=tableauDeDiviseur[i+1];
            }
            else{
                plusGranddiviseur=tableauDeDiviseur[i];
            }
        }
        else;
    }
    printf("Le plus grand diviseur commun entre %d et %d est %d.\n", nbR1.numerateur, nbR1.denominateur, plusGranddiviseur);
    return 0;
}

NR simplification(NR nbR1){
    NR simplifie;
    if ((nbR1.numerateur % pgcd(nbR1))==0){
        if ((nbR1.denominateur % pgcd(nbR1))==0){
            simplifie.numerateur = nbR1.numerateur / pgcd(nbR1);
            simplifie.denominateur = nbR1.denominateur / pgcd(nbR1);
        }
    }
    else{
        printf("Votre nombre rationnel ne peut pas être simplifié.\n");
    }
    printf("Le nombre rationnel simplifié est:\n"
           "%d/%d", simplifie.numerateur, simplifie.denominateur);
    return simplifie;
}