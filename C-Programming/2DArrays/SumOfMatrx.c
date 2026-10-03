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
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("The sum is %d",sum);
    return 0;
}