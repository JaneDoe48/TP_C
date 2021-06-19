#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>


#define M 10
int main(){
    int var1, var2, var3=1;
    for (var1 = 1; var1 <= M; var1++){
        var3 = var1*var3;
    printf("%d! = %d\n", var1, var3);
    }

    return 0;
}