#include <stdio.h>
int main(){
    // In this question we printing the reverse of the array.
    int n;
    printf("Enter the size of the arrayn :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int brr[n];
    for(int j = 0;j<=n-1;j++){
        brr[j] = arr[n-j-1];
    }
    for(int k = 0; k<=n-1;k++){
        printf("%d\n",brr[k]);
    }
    return 0;
}