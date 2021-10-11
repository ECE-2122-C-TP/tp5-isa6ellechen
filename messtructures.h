//
// Created by Isabelle on 06/10/2021.
//

#ifndef TP5_MESSTRUCTURES_H
#define TP5_MESSTRUCTURES_H
struct NombreRationnel{
    int numerateur;
    int denominateur;
};

struct NombreRationnel saisie();
typedef struct NombreRationnel NR;
void afficher(struct NombreRationnel nr);
int additionner(NR nombre1, NR nombre2);
int multiplier(NR nbr1, NR nbr2);
int pgcd(NR nbR1);
NR simplification(NR nbR1);
#endif //TP5_MESSTRUCTURES_H
