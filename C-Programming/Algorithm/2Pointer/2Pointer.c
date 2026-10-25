// Given an array of integers number that is already in non-decreasing order, find two number such that they add up to a specific target number.
#include<stdio.h>
int main(){
    int target = 8;
    int arr[] = {1,2,3,4,5,8,9,10};
    int i = 0;
    int j = 7;
    while(i<j){
        if(arr[i] + arr[j] == target){
            printf("%d %d",arr[i],arr[j]);
            break;
        }
        else if(arr[i] + arr[j] > target){
            j--;
        }
        else if(arr[i] + arr[j] < target){
            i++;
        }
    }
   return 0;
}