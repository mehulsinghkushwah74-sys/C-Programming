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
    for(int i = 0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int k = j+1 ; k<=n-1;k++){
                if(arr[i]+arr[j]+arr[k]==target ){
                printf("[%d,%d,%d]",i,j,k);
            }
            }
        }
    }
    return 0;
}