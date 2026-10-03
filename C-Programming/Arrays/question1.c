#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of the students :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter the marks of %d student :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The student who score less than 35 :");
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35){
            printf("%d, ",i);
        }
    }
    return 0;
}