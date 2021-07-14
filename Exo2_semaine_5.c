#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define TAILLE 10
struct mon_point {
    int x,y;
    char nom[TAILLE];
};

struct rectangle{
    struct mon_point position_1,position_2;
};

int point_dans_rectangle(struct mon_point p1, struct rectangle rect){
    if(p1.x > rect.position_1.x && p1.x < rect.position_2.x && p1.y > rect.position_1.y && p1.y < rect.position_2.y){
        return 1;
    }
    return 0;
}

int main()
{
    struct mon_point p1;
    p1.x = 3;
    p1.y = 4;
    struct rectangle rect;
    rect.position_1.x = 5;
    rect.position_1.y = 3;
    rect.position_2.x = 5;
    rect.position_2.y = 3;
    strncpy(rect.position_1.nom,"Rouge",TAILLE);
    strncpy(rect.position_2.nom,"Rouge",TAILLE);
    strncpy(p1.nom,"Rouge",TAILLE);
    printf(" x = %d , y = %d , %s",p1.x,p1.y,p1.nom);
    int x = point_dans_rectangle(p1,rect);
    printf("\n%d",x);
    return 0;
}