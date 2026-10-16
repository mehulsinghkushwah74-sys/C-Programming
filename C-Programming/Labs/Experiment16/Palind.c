// In this Experiment i am tyring to check that given word is a palindrome or not
#include<stdio.h>
int main(){
    char A[50];
    gets(A);
    int count = 0;
    for(int i=0;A[i]!='\0';i++){
        count++;
    }
    int i,j;
    i = 0;
    j = count;
    while(i>=(count/2)){
        if(A[i] == A[j]){
            continue;
        }
        else
        {
            printf("The given word is not a palindrome");
            break;
        }
        
    }
    printf("The given word is a palindrome");
    return 0;
}