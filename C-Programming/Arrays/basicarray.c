#include <stdio.h>
int main(){
    // int arr[5] = {1,5,3,7,8}; // isse a ke 5 dabbe ban gye
    // // index of 1 is 0 ,5 ka 1,3 ka 2,7 ka 3 and 8 ka 4
    // arr[4]=100; //arrays ki value change kr di
    // printf("%d",arr[4]);
    // similarly we make a array of float
    // char arr[] = {'a','d','g','i'};
    // printf("%c",arr[3]);
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter %d number :",i+1);
        scanf("%d",&arr[i]);
        // printf("\n");
    }

    return 0;
}