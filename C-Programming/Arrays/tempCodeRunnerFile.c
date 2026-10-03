#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        printf("Enter the %d element of the array :",i+1);
        scanf("%d",&arr[i]);
    }
    int target;
    printf("tell us the target :");
    scanf("%d",&target);
    int a = 1;
    int b = 2;
    for(int i = 0;i<=n-1;i++){
        for(int j=a;j<=n-1;j++){
            for(int k = b; k<=n-1;k++){
                if(arr[i]+arr[j]+arr[k]==target && i!=j && j!=k && i!=k){
                printf("[%d,%d,%d]",i,j,k);
            }
            }
        }
        a = a+1;
        b = b+1;
    }
    return 0;
}