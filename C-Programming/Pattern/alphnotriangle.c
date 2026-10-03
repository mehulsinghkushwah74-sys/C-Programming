#include <stdio.h>
int main(){
    int n;
    printf("enter the number of lines :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
        }
        else{
            for(int k=65;k<=64+i;k++){
                char ch = (char)k;
                printf("%c ",ch);
            }
        }
        printf("\n");
    }
    return 0;
}