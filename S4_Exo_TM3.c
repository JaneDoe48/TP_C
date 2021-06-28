#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>


#define T 10
int main(){
    int m;
    int u;
    int tab[T]={0,1,2,3,4,5,6,7,8,9};
    u = tab[T-1];
    tab[T-1]=tab[0];
    tab[0]=u;
    for(m=0;m<T;m++){
        printf("%d\t",tab[m]);
    }
    return 0;
}