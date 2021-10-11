//
// Created by Isabelle on 06/10/2021.
//

#include "mestableaux.h"
#include <stdio.h>
#define MAX_VALEURS 100

int demanderNombreDEntiersTableaux(){
    int tableau[MAX_VALEURS]={0};
    int nombreDEntier = 0;
    int i=0, j=0;
    int valeurDeStockage = 0;
    //demande le nombre de valeurs
    do{
        printf("Entrez le nombre d'entiers que vous allez insérer:\n");
        scanf("%d", &nombreDEntier);
    }
    while (nombreDEntier > MAX_VALEURS);
    // demande pour chaque valeur, où la placer
    for (i=0;i<nombreDEntier; i++){
        printf("Quel est l'entier que vous voulez insérer?\n");
        scanf("%d", &tableau[i]);
    }
    //on veut afficher le plus grand entier du tableau
    for (j = 0; j < nombreDEntier ; j++) {
        if (tableau[j]>valeurDeStockage){
            valeurDeStockage = tableau[j];
        }
        else;

    }
    printf("L'entier le plus grand de votre tableau est %d.\n", valeurDeStockage);
    return 0;
}

int copieTableau() {
    int tableau[3][4] = {{0}};
    int tableauDeCopie[12];
    int i = 0, j = 0;
    // demande pour chaque valeur, où la placer
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Quel est l'entier que vous voulez insérer?\n");
            scanf("%d", &tableau[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {

            printf("%d\t", tableau[i][j]);
        }
        printf("\n");
    }
    //on copie le tableau
    for (i= 0; i < 3; i++) {
        for (j = 0; j <4 ; j++) {
                tableauDeCopie[4*i+j]= tableau[i][j];

        }
    }

    for(i=0; i<12; i++){
        printf("%d\n", tableauDeCopie[i]);
    }
}



