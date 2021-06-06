#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

int is_premier(int max){
    int i;
    for(i=2;i<max;i++){
        if(max%i==0){
            return 0;   
        }  
    }  
    return 1;
}

#define MAX 99
int main(){
    int s;
    is_premier(s);
    for(s=0;s<MAX;s++){
        if(is_premier(s)==1){
            printf("%d\t",s);
        }
    }
    return 0;
}