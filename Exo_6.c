#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

#define N 6
int main(){
    int U0 = 1;
    int U1 = 2;
    int a = 5;
    int b = 10;
    int n;
    int UN;
    for(n=2;n<=N;n++){
        UN = ((a*U0)+(b*U1));
        U0=U1;
        U1=UN;
        printf("U%d = %d\n",n,UN);
    }
    return 0;
}