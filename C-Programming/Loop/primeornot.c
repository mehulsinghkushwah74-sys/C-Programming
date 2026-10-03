#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int count = 0;
    for(int i = 2;i<=n-1;i++){
        if(n%i==0)
        count = count+1;
        break;
    }
    if(count==0)
    printf("the no. is a prime no. :");
    else
    printf("the no is not a prime no. :");
    return 0;
}