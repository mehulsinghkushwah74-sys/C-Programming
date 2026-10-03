#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count = 1;
    for(int i = 1; i<=n;i++){
        if(n/10 != 0){
        count = count + 1; }
        else{
        break;}
        n = n/10;
    }
    printf("given is no. %d digits no. :\n",count);
    return 0;
}