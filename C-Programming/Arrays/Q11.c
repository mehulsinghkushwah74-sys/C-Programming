#include <stdio.h>
// In this question we r reversing the array without using an extra array.
void reverse(int arr[]){
    int i = 0;
    int j = 3;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[4] = {1,5,6,3};
    reverse(arr);
    for(int i = 0;i<=3;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}