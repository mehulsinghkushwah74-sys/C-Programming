// In this question we have to tell that which rows has greatest sum
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the rows :");
    scanf("%d",&n);
    printf("Enter the coloumns :");
    scanf("%d",&m);
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arrsum[n];
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum = sum + arr[i][j];
            arrsum[i] = sum;
        }
    }
    for(int i =0;i<n;i++){
        printf("%d ",arrsum[i]);
    }
    int max = arrsum[0];
    for(int i = 1;i<n;i++){
        if(max<arrsum[i]){
            max = arrsum[i];
        }
    }
    for(int i =0; i<n;i++){
        if(max == arrsum[i]){
            printf("\n%d",i);
        }
    }
    printf("\n%d",max);
    return 0;
}