#include <stdio.h>
int main(){
    int arr[2][2],brr[2][2];
    for(int i = 0; i<=1;i++){
        for(int j =0; j<=1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
       for(int i = 0; i<=1;i++){
        for(int j =0; j<=1;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int newarr[2][2];
    for(int i= 0; i<=1;i++){
        for(int j=0; j<=1;j++){
            newarr[i][j] = arr[i][j]+brr[i][j];
        }
    }
    for(int i = 0; i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%d ",newarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}