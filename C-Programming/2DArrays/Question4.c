#include<stdio.h>
// In this question we have transpose a matrix with only same array not using an extra array.
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
    int d = 0;
    for(int i= 0;i<n;i++){
        for(d;d<n;d++){
            int temp = arr[i][d];
            arr[i][d] =arr[d][i];
            arr[d][i] = temp;
        }
        d = d+1;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}