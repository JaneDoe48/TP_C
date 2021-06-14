#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

//Exercice 3 – Tableau de nombres aléatoires

#define MIN -49
#define MAX 49
#define L 10
#define T 30
int main(){
    srand(time(NULL));
    int al;
    int s;
    int t=0;
    while(t<=T){
        for(s=0;s<=L;s++){
            al = (rand() % (MAX - MIN + 1));
            printf("%d\t",al);
            t=t+10;
        }
    printf("\n");
    }
    return 0;
}