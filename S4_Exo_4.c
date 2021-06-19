#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>


#define N 100
#define M 10000
int main(){
    srand(time(NULL));
    int i;
    int cpt;
    int tab_pos[N];
    for(cpt=0;cpt<M;cpt++){
        i =(rand() % N);
        if(i >=1 && i<=17){
            tab_pos[i]==0;
            printf("La valeur est 0\n");
        }
        printf("La valeur 0 est trirée %d fois\n", cpt);
        if(i >= 18 && i<=45){
            tab_pos[i]==1;
            printf("La valeur est 1\n");
        }
        printf("La valeur 1 est trirée %d fois\n", cpt);
        if(i >= 46 && i<=95){
            tab_pos[i]==2;
            printf("La valeur est 2\n");
        }
        printf("La valeur 2 est trirée %d fois\n", cpt);
        if(i >= 96 && i<=100){
            tab_pos[i]==3;
            printf("La valeur est 3\n");
        }
        printf("La valeur 3 est trirée %d fois\n", cpt);
    }
    return 0;
}