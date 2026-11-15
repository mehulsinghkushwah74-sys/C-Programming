#include <stdio.h>
int main() 
{

printf("Hello, World!");
char s[50];
scanf(" %49[^\n]",s); // ye ek tarika hai jisse hum string ko input le skte hai
printf("\n%s",s);
return 0;
}