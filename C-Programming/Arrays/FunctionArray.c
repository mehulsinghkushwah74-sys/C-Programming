#include<stdio.h>
void fun(int a[]){
    int temp =a[0] ;
    a[0] = a[1];
    a[1] = temp;
    return;
}
// NOTE : when we use a function of array it use pass by refrence not by the pass by value like we wont need to use pointer.
// array me address pass hota hai.
int main(){
    int arr[2] = {1,3};
    fun(arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    return 0;
}