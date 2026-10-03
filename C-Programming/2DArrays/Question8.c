//wave form 2
#include<stdio.h>
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
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                printf("%d ",arr[j][i]);
            }
        }
    else{
         for(int k=m-1;k>=0;k--){
                printf("%d ",arr[k][i]);
            }
    }
    printf("\n");
    }

    return 0;
}