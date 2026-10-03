#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of lines :");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=i;k>=1;k--){
            printf("%d ",k);
        }
        if(i!=1){
           for(int x=1;x<=i-1;x++){
            printf("%d ",x+1);
            }
        }
        printf("\n");
    }
    return 0;
}