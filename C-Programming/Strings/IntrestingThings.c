#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "mehul singh";
    // str = "kushwah"; // We can't do it like this but we can change by individual character

    // Pointer initialization , we can modify entire string but not the individual character

    char* ptr = "Arjun singh"; //isse modify nhi hui bss wo pointer Arjun singh se mehul singh pr chla gya and arjun singh kho gya
    ptr = "mehul singh"; // pointer move hota hai string nhi 
    printf("%s",ptr);

    return 0;
}