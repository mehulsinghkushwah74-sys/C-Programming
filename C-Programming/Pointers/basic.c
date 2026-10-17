#include<stdio.h>
int main(){
    // Variable which stores the address of another variable
    // can be type of int, char, array, or any other
    // declared by using *
    // * is the dereference operator
    // and & is a address of operator
    int a = 7;
    // &a means it is the address of the a 
    // printf("%p",&a); // Address of a will print
    // Let say we have stored the adress of a in ptr so for finding the value that which is present at a then we use *ptr 
    int* ptra = &a;
    printf("The value of a is : %d\n",a);
    printf("The value of a is : %d\n",*ptra);
    printf("The Address of a is : %p",ptra);
    printf("The Address of ptra is : %p",&ptra);
    int* p = &ptra;
    printf("The Address of ptra is : %p",p);

    // both line will print the value of a 
    // int *p = ptr;
    // printf("%p\n",ptr);
    // printf("%p",p);

    // A pointer that is not assigned any value but NULL is known as the NULL pointer.
    // In computer programming, a null, a null is a pointer that does not point to any object or funtion.
    // We can use it to initialize a pointer variable when that pointer isn't assigned any valid memory address

    int *ptr = NULL;
    return 0;
}