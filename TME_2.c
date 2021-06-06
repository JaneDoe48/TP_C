#include <stdio.h>


#define M 5
#define N 7
int main(){
    int n,m;
    for(m=0;m<M;m++){
        if((m==0)||(m==M-1)){
            for(n=0;n<N;n++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(n=1;n<(N-1);n++){
                printf(" ");
            }
            printf("*");   
        }
    printf("\n");
    }
    return 0;
}