#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "hello my name is mehul";
    printf("%s\n",str);
    puts(str); // apne aap ek next line me answer deta hai
    char str1[40];
    // scanf("%s",str1); // Iska sirf ek hi problem hai agr hum 2 word inpput llenge to sirf ye pehle wala word print krega toh iski vjh hum gets la use krenge
    // printf("Your input is :%s",str1);
    gets(str1);
    printf("Your input is :%s",str1);
    return 0;
}