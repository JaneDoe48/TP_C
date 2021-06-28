#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>


#define MAX 3
#define MIN 1
int main(){
    srand(time(NULL));
    int J1=(rand() % (MAX - MIN + 1));
    int J2=(rand() % (MAX - MIN + 1));
    int c=1;
    int p=2;
    int f=3;
    if(J1!=J2){
        if(((J1==c)||(J2==c))&&((J1==f)||(J2==f))){
            printf("Les ciseaux coupent la feuille\n");
        }
        if(((J1==c)||(J2==c))&&((J1==p)||(J2==p))){
            printf("Les ciseaux tombent dans le puit\n");
        }
        if(((J1==f)||(J2==f))&&((J1==p)||(J2==p))){
            printf("La feuille recouvre le puits\n");
        }
    }
    else{
        printf("Relancez!");
    }
    return 0;
}