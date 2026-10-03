#include<stdio.h>
int main(){
    // integer 4 bytes leta hai but ek character sirf 1 byte leta hai.
    // ASCCI value of A is 65 ,a is 97 and '0' ki 48 and '9 ki 57'
    // int a[4] = {1,2,3,4};
    // char arr[6] = {'a','b','c','d','0','9'};
    // printf("%c\n",arr[2]);
    // printf("%p\n",&a[0]);
    // printf("%p\n",&a[1]);
    // printf("%p\n",&a[2]);
    // printf("%p\n",&a[3]);
    // printf("%p\n",&arr[0]);
    // printf("%p\n",&arr[1]);
    // printf("%p\n",&arr[2]);
    // printf("%p\n",&arr[3]);
    // printf("%d\n",a[0]);
    // printf("%d\n",a[1]);
    // printf("%d\n",a[2]);
    // printf("%d\n",a[3]);
    // printf("%d\n",arr[0]); // ye hume ascci value deta hai
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[3]);
    // printf("%d\n",arr[4]);
    // printf("%d\n",arr[5]);

    // char b[11] = ['hello world'];
    // printf("c",b); it gives a array

    // NULL Character \o means single character
    // char ch = \0;
    // printf("%c",ch);
    // printf("%d",ch);
    // it has ascci value 0
    // generaly it should give the error becuase it is storing to character at a single box but it don't because it is a specail character called null character.
    char x[] = "hello"; // computer ese intialisation \0 de deta apne aap at last
    int i =0;
    while(x[i]!='\0'){
        printf("%c",x[i]);
        i++;
    }
    printf("\n%c",x[2]);

    char str[50] = "Mehul singh kushwah"
    int i =0;
    while(x[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    // NOTE: arr[i]
    //       *(i+arrr)
    //       *(arr+i)
    //       i[arr]   all are the same 
    return 0;
}