#include <stdio.h>
#include <assert.h>

//Exercice 6 - Boucles en C
int somme_carres(int m,int n){
    int s = 0;
    int i = m;
    while(i<=n){
        s = s+(i*i);
        i = i+1;
    }
    return s;
}

int somme_carres2(int m,int n){
    int s = 0;
    int i;
    for(i=m;i<=n;i++){
        s = s+(i*i);
    }
    return s;
}

//Exercice 7 - Nombres premiers
#define MAX 5
int premier(int max){
    int i;
    for(i=2;i<max;i++){
        if(max%i==0){
            return 0;   
        }  
    }  
    return 1;
}

void afficheNombresPremiers(int n_max){
    int i;
    for(i=2;i<n_max;i++){
        if(premier(i)){
            printf("%d\n",i);
        }
    }
}

//Exercice 9 - Nombres parfaits
int sommeDiviseurs(int entier){
    int d;
    int m = 0;
    for(d=1;d<entier;d++){
        if(entier%d==0){
            m = m + d;
        }
    }
    return m;
}

int k_parfait(int n, int k){
    if(sommeDiviseurs(n)==(n*k)){
        return 1;
    }
    else{
        return 0;
    }
}

//Exercice 10 - Comparaison des valeurs réelles
float valeur_absolue(float x){
    if(x<0){
        return (x*-1);
    }
    else{
        return x;
    }  
}

int egal_eps(float a,float b,float ep){
    if((a<=(b+ep))&&(a>=(b-ep))){
        return 1;
    }
    else{
        return 0;
    }
}

float surface_float(float g,float m){
    return g*m;
}

int main(){
    assert(somme_carres(1,5) == 55);
    assert(somme_carres(2,5) == 54);
    assert(somme_carres(3,5) == 50);
    assert(somme_carres(4,5) == 41);
    assert(somme_carres(5,5) == 25);
    assert(somme_carres(3,6) == 86);
    assert(somme_carres(-4,0) == 30);
    assert(somme_carres(0,4) == 30);
    printf("Fin\n");
    printf("le nombre est %d\n",premier(MAX));
    int n_max=90;
    afficheNombresPremiers(n_max);
    int entier=25;
    printf("somme des divieurs stricts : %d\n",sommeDiviseurs(entier));
    int n = 90;
    int k = 84;
    printf("%d\n",k_parfait(n,k));
    float x = 6.98;
    float a = 2;
    float b = 2.02;
    float ep = 0.2;
    printf("La valeur absolue est %f\n", valeur_absolue(x));
    printf("%d\n",egal_eps(a,b,ep));
    assert(egal_eps(surface_float(5.4,4.6),24.70,0.2));
    printf("OK");
    return 0;
}