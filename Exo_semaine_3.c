#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>


int premier(int max){
    int i;
    for(i=2;i<max;i++){
        if(max%i==0){
            return 0;   
        }  
    }  
    return 1;
}

//Exercice 1 – Une autre façon d’écrire les boucles
int premiers(int x){
    int h;
    int m=0;
    if(x>0){
        for(h=1;h<x;h++){
            m=m+h;
        }
    }
    else{
        for(h=(-1);h>x;h--){
            m=m+h;
        }
    }
    printf("la somme est : %d\n",m);
}

#define MAX 12
#define LONG 3
#define HOR 10
#define VER 10

int main(){
    int x = -5;
    /*do {
        scanf("Donnez un nombre premier : %d",x);
    }while(premier(x)==0);*/
    premiers(x);
    int i;
    int cpt=0;   
    for(i=1;i<MAX;i++){
        printf("%d\t",i);
        if(cpt==(LONG-1)){
            printf("\n");
            cpt=0;
        }
        else{
            cpt++;
        }
    }
        int u;
    int y;
    int h;
    for(y=1;y<VER;y++){
        for(u=1;u<HOR;u++){
            printf("%d\t",(u*y));
        }
    printf("\n");
    }

    return 0;
}