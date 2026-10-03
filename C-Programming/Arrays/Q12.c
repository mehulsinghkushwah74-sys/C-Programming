#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,2,3};
    int count = 0;
    for(int i = 0, j =4;i<=j;i++,j--){
        if(arr[i] == arr[j]) {
            count++;
        }
        else{
            printf("The given array is not a palindrome");
            break;
        }
    }
    if(count == 3){
        printf("The given array is palindrome");
    }
    return 0;
}