// realloc(pointer,new-size);

// it is used to dynamically change the memory allocation os a previosly allocated memory.

// new-size is the new total size to be allocated and pointer is the pointer to previous allocated memory.

// Returns pointer to the first block of allocated memory address with new size.

// int* ptr = (int*)malloc(5* sizeof(int));//20 bytes allocated
// ptr = realloc(ptr,10*sizeof(int));//total 40 bytes allocated

// NOTE : The data stored remains intact. just the allocated memory incresed.Hence it, allows allocation according to our needs without making us lose the data stored in the intial 20 bytes, hence, it is different from malloc() and calloc().

#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*)malloc(4*4);
    int* p = ptr;
    printf("%d\n",(ptr)); //different
    ptr = realloc(ptr,6*sizeof(int));
    printf("%d",(ptr));//different
    return 0;
}

// pehle ye apne side me kjgh dkehta hai agr jgh hao toh vha memory expand kr deta hai aur agr jgh khali nhi hai toh voh pure memory ko alg le jata hai vha se and sobko ek sath hi rakhta hai alg alg nhi krta
