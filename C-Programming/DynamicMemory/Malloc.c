#include<stdio.h>
#include<stdlib.h>
int main(){
    // To allocate memory for 100 integers
    // isse 100 integers ki memory ek sath store ho jati hai     

    // char* ptr = (int *)malloc(100* sizeof(int));

    int* ptr = (int*) malloc(10*4);
    printf("%d",*ptr); // gives garbage value


    // int a = sizeof(int);

    // To allocate a memory for 25 floating numbers using calloc

    // float* ptr = (float*)calloc(25, sizeof(float));

    // one difference between malloc() and calloc() is that calloc() intialises all the allocated memory blocks with value 0, unlike malloc() in which allocated have garbage value.

    int* a = (int*) calloc(10,4);
    printf("\n%d",*a); // gives the value zero
    return 0;
}