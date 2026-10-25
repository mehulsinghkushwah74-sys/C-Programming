// time complaxity is O(n*n)
// avg and best case have same time complaxity
selection short is not stable;

#include<stdio.h>
int main(){
    int arr[] = {23,143,5,52,1};
    for(int i = 0;i<4;i++){
        int min = arr[i];
        for(int j = i+1;j<5;j++){
            if(min>arr[j]){
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min;
            }
        }
    }
    for(int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}