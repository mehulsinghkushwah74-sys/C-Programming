#include <stdio.h>
#include<string.h>

int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon pikachu;
    pokemon charizard;

    pokemon arr[3];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"pikachu");

    arr[1].attack = 20;
    arr[1].hp = 120;
    arr[1].speed = 310;
    arr[1].tier = 'B';
    strcpy(arr[1].name,"charizard");

    arr[2].attack = 70;
    arr[2].hp = 50;
    arr[2].speed = 20;
    arr[2].tier = 'C';
    strcpy(arr[2].name,"mewtwo");

    for(int i = 0;i<3;i++){
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
        printf("%s\n",arr[i].name);
    }
    return 0;
}