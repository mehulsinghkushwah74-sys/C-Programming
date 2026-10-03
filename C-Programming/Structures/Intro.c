#include<stdio.h>
int main(){
    // int x ;
    // char ch;
    // float y;
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier; // S,A,B,C,D
    }pikachu,charizard;
    // struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 80;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    
    printf("%d",pikachu.attack);

    // struct pokemon charizard;
    charizard.attack = 80;
    charizard.hp = 90;
    charizard.speed = 70;  
    charizard.tier = 'S';



    
    return 0;
}