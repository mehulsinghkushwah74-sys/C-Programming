#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter the first string: ");
    fgets(str);
    char str1[50];
    printf("Enter the second string; ");
    fgets(str1);
        for(int i = 0;i<strlen(str);i++){
            int x = 0;
            second_loop:
            for(int j = 0; (j<strlen(str) || j<strlen(str1));j++){
                if(str[i] == ' '){
                    goto first_loop;
                }
                if(str[i] == ' '){
                    goto second_loop;
                }
                if(str[i] == str1[j]){
                    x++;
                    break;
                }
            }
            if(x == 0){
                printf("The strings are not anagram");
                return 0;
            }
        }
        printf("The strings are anagrams");
    // }
    // else
    // {
    //     printf("error");
    // }
    
    return 0;
}