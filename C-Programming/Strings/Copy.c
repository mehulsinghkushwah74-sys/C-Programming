#include<stdio.h>
#include<string.h>

int main(){

    // Shallow copy isme same hi string hoti hai

    char s1[] = "mehul singh";
    char* s2 = s1;
    s1[0] = 'p';
    printf("%s",s2);

    // Deep copy

    char str[] = "hello";
    char str1[] = "hello"; // both are the different copies

    //  hum strings ko equall nhi kr skte 

    // Builtin function

    char* stp = "mehul";
    int x = strlen(stp); // strlen '\0' ko chhod kr count krta hai
    printf("%d",x);

    strcpy(char* str,char* stp); // copy kr dega str me stp ki string aa jayegi

    strcat(char* str, char* stp); // ye do string ko add kr deta hai

    return 0;
}