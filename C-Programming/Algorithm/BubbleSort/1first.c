// 'n' elements in the array > 'n-1' passes.
// After every pass we need to apply bubble sort on the unsorted elements only & we do not need to check the 'largest'.
// Outer loop is for the number of passes.
// inner loop is for swaping.

// Time complaxity

// inner loop run first n-1 then n-2 ,n-3 n-4 ..... 3,2,1
// so the O(n(n-1)/2) = O(n*n)

// so the time complaxity is O(n*n)

// Maximum no of swaps in worst case in bubble sort is that ((n-1)*(n-2))/2
// The worst case is that all the numbers are in descending 

// Bubble sort is stable which means that if an element is repeating then it also get sorted with relative order jo pehle wo pehle without any error

#include<stdio.h>
int main(){
    int arr[] = {57,6,34,5,2,25,3};
    for(int i = 0;i<6;i++){
        int x = 0;
        for(int j = 0;j<6-i;j++){
            if(arr[j]>arr[j+1]){
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