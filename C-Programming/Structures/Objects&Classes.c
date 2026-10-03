#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        int speed;
    }pikachu,charizard,mewtwo;
    // NOTE : pokemon is class and inside the pokemon all the pikachu,cahrizard and mewtwo are objects.
    struct legendary pokemon{
        int specialattack;
        struct pokemon x;
    }
    // iska mtlb hai ki ek legendary object hai jiske pass kuch different ability and uske pass wo kuch common ability bhi to pokenmon me hai toh use ese define krte hai 
    return 0;
}