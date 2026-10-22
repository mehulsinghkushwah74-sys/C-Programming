// String is not a data type.
// We express strings an array of characters terminated by a null character("\0").
 
// String: array of characters terminated by null character
// Strings in c is created by creating an array of characters
// We need an extra character to tell the compiler that string ends here.

// char name[] = "harry"; When we write like this compiler Automatically add '\0' at the end. but in other case we have to give null character

// char name[] = {'h','a','r','r','y','\0'};

// Taking string from the user

// char name[43];
// gets(name);
// printf("%s",name);
// or 
// puts(name);
#include<stdio.h>

void printstr(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
}
int main(){
    // char str[] = {'m','e','h','u','l','\0'};
    char str[73];
    gets(str);
    return 0;
}