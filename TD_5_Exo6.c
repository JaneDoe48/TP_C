#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


#define MAX 20
#define MIN 0

void print_tab(int tab[], int taille){
    int i;
    printf("Tableau : \n");
    printf("[ ");
    for(i=0;i<taille && tab[i] != -1 ;i++){
        printf("%d ",tab[i]);
    }
    printf("]\n");
}

int main(){
    srand(time(NULL));
    int taille = (rand()%(MAX-MIN+1));
    int tab_brut[MAX];
    int i;
    int m;
    for(i=0;i<taille;i++){
        tab_brut[i]=(rand()%(2));
        if(i==taille-1){
            tab_brut[i]=-1;
        }
    }
    print_tab(tab_brut,MAX);
    int tab_compress[MAX];
    int cpt=0;
    i=0;
    int index_c=0;
    while(tab_brut[i]!=-1){
        cpt=0;
        for(m=i;m<(MAX-1);m++){
            if(tab_brut[i]==tab_brut[m]){
                cpt=cpt+1;
            }
            else{
                break;
            }
        }
    tab_compress[index_c]=cpt;
    tab_compress[index_c+1]=tab_brut[i];
    index_c=index_c+2;
    i=i+cpt;
    }
    tab_compress[index_c]=-1;
    print_tab(tab_compress,MAX);
    int nb;
    int value;
    int n;
    int y=0;
    int tab_recomp[MAX];
    i=0;
    while(tab_compress[i]!=-1 && i<MAX){
        nb=tab_compress[i];
        value=tab_compress[i+1];
        //printf("nb : %d, value: %d \n",nb,value);
        for(n=y;n<nb+y;n++){
            tab_recomp[n]=value;
        }
        y=y+nb;
        i = i+2;
    }
    tab_recomp[y] = -1;  
    print_tab(tab_recomp,MAX);
    return 0;
}