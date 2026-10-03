#include<stdio.h>
typedef int* pointer;
int main(){
    int x = 5;
    int y = 7;
    // int *a = &x;
    // int *b = &y;
    // If we are try to do like
    // int* a = &x,b = &y; so for this a is a pointer but the b is only a variable with integer data type 
    pointer a = &x,b = &y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}