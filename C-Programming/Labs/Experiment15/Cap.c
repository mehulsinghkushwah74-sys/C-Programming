// In this experiment we are trying format the string using 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[30];
//     printf("Enter the Message");
//     gets(str);
    
//     spit(char msg[], int lenght, char pattern);
//     // for(int i=0;i<strlen(str);i++){
//     //     if(i == 0 ||(i>1 && str[i-1] == ' ') && str[i]>='a'&& str[])
//     // }
//     return 0;
// }
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void toTitleCase(char *str) {
    bool newWord = true;

    for (int i = 0; str[i] != '\0'; i++) {
        // Check for word boundaries (spaces, tabs, punctuation)
        if (isspace((unsigned char)str[i])) {
            newWord = true;
        } else if (newWord) {
            str[i] = toupper((unsigned char)str[i]);
            newWord = false;
        } else {
            str[i] = tolower((unsigned char)str[i]);
        }
    }
}

int main(void) {
    char text[256];

    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        toTitleCase(text);
        printf("Formatted string: %s", text);
    }

    return 0;
}