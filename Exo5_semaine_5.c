#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

int divise(int a, int b){
    if(a%b==0){
        return 1;
    }
    return 0;
}

int ecrire_division(int a, int b){
    if(divise(a,b)==1){
        printf("%d divise %d\n",b,a);
    }
    else{
        printf("%d ne divise pas %d\n",b,a);
    }
}

int nb_div(int n){
    int x;
    int nb=0;
    for(x=1;x<n;x++){
        if(divise(n,x)==1){
            nb=nb+1;
        }
    }
    return nb;  
}

int premier(int n){
    if(nb_div(n)==1){
        printf("vrai");
    }
    else{
        printf("Faux");
    }
}

int main(){
    printf("%d\n",divise(5,25));
    ecrire_division(4, 2);
    ecrire_division(5, 2);
    printf("il y a %d diviseur(s)\n",nb_div(10));
    premier(7);
    return 0;
}