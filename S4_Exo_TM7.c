#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>


int main(){
    int a=218,b=15,cumul=0,r=a%2;
    int calcul;
    while(a/2>0){
        calcul=((a/2)*(b*2))+(r*b);
        printf("%d\n",cumul);
        if(r==1){
            cumul=cumul+b;
        }
        else{
            cumul=cumul;
        }
        a=a/2;
        b=b*2;
        printf("%d\t%d\n",a,b);
    }
    return 0;
}