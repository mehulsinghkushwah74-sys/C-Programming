#include <stdio.h>
int main(){
    int n;
    printf("Enter the no :");
    scanf("%d",&n);
    int count = 1;
    for(int i = 1; i = n;i++){
    if(n%10!=0){
        count = count + 1;
    }
    else {
        break;
    }
    }
    if(count == 3){
        printf("the no. is three digit no. ");
    }
    else{
        printf("the no. is not three digit no. ");
    }

return 0;
}