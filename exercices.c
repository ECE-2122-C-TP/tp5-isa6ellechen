//
// Created by Isabelle on 06/10/2021.
//

#include "exercices.h"
#include "messtructures.h"
#include <stdio.h>
#include "mestableaux.h"

void exercice1(){
    afficher(saisie());
    multiplier(saisie(), saisie());
    additionner(saisie(), saisie());
}

void exercice2(){
    demanderNombreDEntiersTableaux();
}

void exercice3(){
    copieTableau();
}
void exerciceSuplementaire(){
    pgcd(saisie());
    simplification(saisie());
}