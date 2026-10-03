#include<stdio.h>
#include<limits.h>
int main(){
    // we have to find the second largest element of the array
    int arr[8] = {1,2,3,4,5,6,7,8};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0;i<=7;i++){
        if(max<=arr[i]);
        max = arr[i];
    }
     for(int i = 0;i<=7;i++){
        if(smax<arr[i] && arr[i]!=max);
        smax = arr[i];
    }
    if(smax==max){

    }
    printf("%d",smax);
    return 0;
}