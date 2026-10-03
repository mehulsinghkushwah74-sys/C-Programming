#include <stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        printf("Enter the %d number of the array :",i+1);
        scanf("%d",&arr[i]);
        // printf("\n");
    }
    int product = 1;
    for(int j = 0;j<=n-1;j++){
        product = product*arr[j];
    }
    printf("The product of the element of the arrays is :%d",product);
    return 0;
}