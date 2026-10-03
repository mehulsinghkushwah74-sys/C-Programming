#include <stdio.h>
int main(){
    int arr[8];
    for(int i=0;i<=7;i++){
        printf("Enter a element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=7;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}