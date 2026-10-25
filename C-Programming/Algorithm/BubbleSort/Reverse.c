#include<stdio.h>
int main(){
    int arr[] = {57,6,34,5,2,25,3};
    for(int i = 0;i<6;i++){
        int x = 0;
        for(int j = 0;j<6-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                x++;
            }
        }
        if(x == 0){
            printf("%d\n",i);
            break;
        }
    }
    for(int i = 0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}