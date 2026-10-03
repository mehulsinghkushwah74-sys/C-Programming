#include <stdio.h>
int main(){
    int arr[3];
    for(int i = 0;i<=3;i++){
        printf("%p\n",&arr[i]);
    }
    // in the array the memory allocate in a sequence and a diiference of 4
    // the address of the array of the array is same the address of the first element of the array.
    return 0;
}