#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon a,b,c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name,"charizard");

    // b.attack = a.attack;
    // b.hp = a.hp;
    // b.speedn = a.speed;
    // b.tier = a.speed;
    // str(b.name,a.name);

    b = a; 
    b.attack = 200;
    // iska mtlb ye hai ki jab hum b me change krenge toh a me koi change nhi hoga sirf b ki value change hogi.

    // now the both things are same 
    printf("%d ",b.attack);
    printf("%d",a.attack);
    return 0;
}