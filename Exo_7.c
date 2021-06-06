#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

#define NB_RANG 5
#define NB_PLACES 5
#define MAX_GROUPE 12

int main(){
    srand(time(NULL));
    int nb_arrivant;
    int nb_place=NB_RANG*NB_PLACES;
    printf("Il y a %d places disponibles\n",nb_place);
    int nb_rang = NB_RANG;
    int nb_place_rang = NB_PLACES;
    while(nb_place>0){
        nb_arrivant=(rand() % MAX_GROUPE);
        if (nb_arrivant > nb_place_rang) {
            
        }

        printf("%d personne(s) a placer\n",nb_arrivant);
        printf("%d personne(s) placee(s) dans la rangée %d\n",nb_arrivant,(nb_place%NB_RANG));
        nb_place=nb_place-nb_arrivant;

    }
    return 0;
}