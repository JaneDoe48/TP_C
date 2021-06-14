#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

//Exercice 1 – Calcul de PGCD

#define N1 40
#define N2 100

int main(){
    int nb1 = N1;
    int nb2 = N2;
    while(nb1!=nb2){
        if(nb1>nb2){
            nb1 = nb1-nb2;
        }
        else{
            nb2 = nb2-nb1;
        }
    }
    printf("le PGCD est : %d",nb2);
    return 0;
}