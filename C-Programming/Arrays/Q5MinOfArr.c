#include<stdio.h>
int main(){
    int n;
    printf("Emter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        printf("Enter the %d element of the array :",i+1);
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int j = 1;j<=n-1;j++){
        if(min>=arr[j]){
            min = arr[j];
        }
    }
    printf("the minimum element of the array  is : %d",min);
    return 0;
}