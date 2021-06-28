#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

#define MAT 3
int main(){
    int i;
    float moy;
    float somme;
    int c;
    int tab_c[MAT]={2,2,2};
    for(i=0;i<MAT;i++){
        c=c+tab_c[i];   
    }
    float tab_n[MAT]={13.5,10,16};
    for(i=0;i<MAT;i++){
        somme=somme+(tab_c[i]*tab_n[i]);
    }
    moy=somme/c;
    printf("La moyenne est de %f",moy);
    return 0;
}