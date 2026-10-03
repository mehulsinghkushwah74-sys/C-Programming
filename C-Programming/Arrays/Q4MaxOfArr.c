#include <stdio.h>
#include <limits.h>
int main(){
    // int n;
    // printf("enter a number :");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i = 0;i<=n-1;i++){
    //     printf("Enter the %d number of the array :",i+1);
    //     scanf("%d",&arr[i]);
    //     // printf("\n");
    // }
    // int max = arr[0];
    // for(int i = 1;i<=n-1;i++){
    //     if(max<=arr[i]){
    //         max = arr[i];
    //     }
    // }
    // printf("%d",max);
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        printf("Enter the %d number of the array :",i+1);
        scanf("%d",&arr[i]);
        // printf("\n");
    }
    int max = INT_MIN; // this means the lowest number in c library before this we have to include<limits.h>
    for(int i = 1;i<=n-1;i++){
        if(max<=arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}