#include<stdio.h>
#include<string.h>
int main(){
    // to print the ascii value of the character

    // char ch = 'A';
    // int x = (int)ch;
    // printf("%d ",x);
    // printf("%d",ch);

    // '0' ki ascii value 48 and '9' ki 57 hoti hai 

    //Creating character array

    // char arr[] = {'h','e','l','l','o'};

    // for(int i = 0;i<5;i++){
        // printf("%c\n",arr[i]); both will work same
    //     printf("%c",*(arr+i));
    // }

    // Null character '\0' ye string ke ekdum last me aata hai and ye single character hai and iski asci value 0 hoti hai.

    // char arr[] = {'h','e','l','l','o','\0'};
    // int i = 0;
    // while(*(arr+i) != '\0'){
    //     printf("%c",*(arr+i));
    //     i++;
    // }

    // Creating string 

    // both have same meaning 

    // char arr[] = {'h','e','l','l','o','\0'};

    // char arr[] = "hello"; // apne aap '\0' de deta hai but usme hume specific dena padega
    
    // int i = 0;
    // while(*(arr+i) != '\0'){
    //     printf("%c",*(arr+i));
    //     i++;
    // }

    // Individual character print

    // char str[] = "hello"; 
    // printf("%c\n",*(str+3));
    // printf("%d",*(str+3)); // Ascii value
    
    // We can modify as same as the array
    
    // char str[] = "hello";
    // str[0] = 'm';
    // str[1] = 97; // ye jiski ascii value hogi wo assign ho jayega for example 97 ki a hota hai toh second place pr a aa jayega 
    
    // int i = 0;
    // while(*(str+i) != '\0'){
    //     printf("%c",*(str+i));
    //     i++;
    // }

    // Ways of printing the particular element of array

    // arr[i];
    // *(arr+i);
    // *(i+arr);
    // i[arr];
    
    // Input and output of the string without loop

    char str[] = "hello";
    // gets(str); // isse hume puri string ko input le skte hai

    // puts(str); // isse hum puri string ko print kr skte hai

    scanf("%s",str); // isme problem ye hai ki ye sirf first word hi input leta hai  

    printf("%s",str); // same work as the puts
    return 0;
}