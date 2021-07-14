#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

int min2Int(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

int min3Int(int a, int b, int c){
    if(a<b&&a<c){
        return a;
    }
    if(b<a&&b<c){
        return b;
    }
    if(c<a&&c<b){
        return c;
    }
}

int main(){
    int a, b, c, d,t=25;
    a = 5;
    b = 3;
    c = min2Int(a,b);
    d = min3Int(a,b,c);

    min3Int(min2Int(a,b),d,t)
    printf("le minimum de %d, %d et %d est %d.\n", a, b, c, d);
    return 0;
}