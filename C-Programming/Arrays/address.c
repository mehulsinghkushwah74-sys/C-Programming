#include <stdio.h>
int main (){
    int arr[3] = {1,2,3};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p",&arr[2]);

    return 0;
}