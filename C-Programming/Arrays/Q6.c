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
    int a = 0;
    for(int i = 0;i<=n-1;i++){
        for(int j=a;j<=n-1;j++){
            if(arr[i]+arr[j]==target && i!=j){
                printf("[%d,%d]",i,j);
            }
        }
        a = a+1;
    }
    return 0;
}