#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>


int f1(int a, int b){
    return a*b;
}

int f2(int a, int b){
    if(b){
        return a*a;
    }
    else{
        return -1;
    }
}

int f3(int a, char bc){
    if (bc == 'c'){
        return a*a;
    }
    else{
        return -1;
    }
}

int main(){
    printf("%d\n", f1(3, 2) + f2(2, 1) - f3(4,'g'));
    printf("%d\n", f1(3, 2) + f2(2, 0) - f3(4,'c'));
    return 0;
}