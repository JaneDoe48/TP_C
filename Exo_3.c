#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

#define MIN 1
#define MAX 9
#define BUT 5
#define NBCOUP 10
int main(){
    srand(time(NULL));
    int N;
    int pc=0;
    do{
        N = (rand() % (MAX - MIN + 1));
        pc++;
    }while((N!=BUT)&&(pc<NBCOUP));
    if(N==BUT && pc<NBCOUP){
        printf("Gagné : %d",N);
    }
    else{
        printf("Perdu : %d",N);
    }
    return 0;
}