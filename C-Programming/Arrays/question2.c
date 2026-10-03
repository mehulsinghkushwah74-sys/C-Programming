#include <stdio.h>
int main(){
    int arr[3] = {1,3,5};
    int sum = 0;
    for(int i = 0; i<=2;i++){
        sum = arr[i]+ sum;
    }
    printf("%d",sum);
    return 0;
}