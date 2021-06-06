#include <stdio.h>



int main(){
    int i, n, resu, max=20;
    for (n = 1; n <= max; n++){
        resu = resu * (n+1);
    printf("%d! = %d\n", n, resu);
    }
    return 0;
}