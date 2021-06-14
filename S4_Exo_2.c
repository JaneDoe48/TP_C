#include <stdio.h>



#define TAILLE 10
#define VAL 3.14159

int main(){
    float tab[TAILLE];
    int i;
    tab[0]=0;
    for(i=1;i<TAILLE;i++){
        tab[i]=VAL/i;
    }
    printf("truc = %f\n", tab[4]);
    return 0;
}