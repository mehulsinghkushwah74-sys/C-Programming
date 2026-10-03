#include<stdio.h>
int main(){
    int arr[5] = {1,4,2,5,7};
    for(int i = 0; i<=4;i++){
        if(i%2==0){
            arr[i] = arr[i]+10;
        }
        else{
            arr[i] = arr[i]*2;
        }
        
    }
    for(int j = 0;j<=4;j++){
        printf("%d\n",arr[j]);
    }
    return 0;
}