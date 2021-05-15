#include <stdio.h>
//Exercice 4 – Prix d’une place de cinéma
int bale(int age,int jour,float heure){
    if (age < 14 ){
        return 4;
    }
    if ((age < 26)&&(1<=jour)&&(jour<=5)){
        return 4.90;
    }
    if ((age < 26)&&(6<=jour)&&(jour<=7)){
        return 6.90;
    }
    return 11;
}

//Exercice 5 - Variables et Expressions arithmétiques
void get_billet(int somme){
int nb_cinq = somme/5; 
int rest = somme%5;
int nb_deux = rest/2;
int nb_un = rest%2;
printf("\n nb billet cinq = %d; nb billet deux = %d nb billet un = %d", nb_cinq, nb_deux, nb_un );

}

int main() {
    int age = 7;
    int jour = 4;
    float heure = 12.0;
    int prix = bale(age,jour,heure);
    printf("age= %d, jour = %d, heure = %f ; va payer;%d", age, jour, heure, prix);
    
    get_billet(13);
    return 0;
    
}

