#include <stdio.h>
int main(){;
    int  n;
    printf("Enter the number :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        printf("Enter the %d element of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    int evensum = 0;
    int oddsum = 0;
    for(int i = 0;i<=n-1;i= i+2){
        evensum = evensum + arr[i];
    }
     for(int i = 1;i<=n-1;i= i+2){
        oddsum = oddsum + arr[i];
    }
    printf("The difference between the even and odd sum is : %d",(evensum-oddsum));
    return 0;
}