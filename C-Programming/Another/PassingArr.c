// NOTE :
//         We pass array to a function when we need to pass a list of values to given function.
//         we can pass the arrays to a funstion
//             1. By declaring array as a parameter in the function.  for example - int avg(int arr[])
//             2. By declaring a pointer in the function to hold the base address of the array. for example - int sum(int* ptr) or func(arr)
#include<stdio.h>
int avg(int* ptr){

     return 0;
}
int main(){
    int arr[] = {1,2,3,4};
    float x = avg(arr);
    printf("%f",x);
    return 0;
}