//  Write a program to take N number of integers as input and display them

#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*) calloc(5,4);
    int* p = ptr;
    for(int i = 0;i<5;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    for(int i = 0;i<5;i++){
        printf("%d\n",*p);
        p++;
    }
    return 0;
}