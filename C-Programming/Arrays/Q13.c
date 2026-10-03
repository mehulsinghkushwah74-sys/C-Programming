#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        printf("Enter the %d element of the array :",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("how many times you want to rotate the array :");
    scanf("%d",&x);
    x = x%n;
    for(int i = 2,j=n-2;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] =arr[j];
        arr[j] = temp;
    }
    for(int i = 0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}