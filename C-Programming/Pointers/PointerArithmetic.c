#include <stdio.h>
int main()
{
    // int 4bytes leta hai
    // char 1byte leta hai
    int a = 2;
    int *ptra = &a;
    printf("%d\n", ptra); // address in number
    printf("%d\n", ptra + 1);
    printf("%p\n", ptra); // Address in hexadecimal value
    printf("%p \n", ptra + 1);
    // isme +1 ka mtlb hota hai ki int ki size ek baar add kr do for example the size of int is 4bytes toh wo 4 add kr dega
    char b = '3';
    char *ptrb = &b;
    printf("%p\n", ptrb);
    printf("%p\n", ptrb - 2);

    // Arrays and Pointers

    int arr[3] = { 1,2,6};
    int *ptraar = arr;
    printf("%d\n", &arr[0]);
    printf("%d\n", ptraar);
    // jo ptraar hai wo array ke first index ka address store krta hai

    // arr[i] = *(arr+i) both means the same
    printf("%d\n", arr[2]);
    printf("%d\n", *(arr + 2));

    // if arr is a pointer to arr[0] then arr+i is a pointer to arr[i]
    printf("%d\n", &arr[2]);
    printf("%d\n", *(&arr[2]));
    printf("%d", ptraar + 2);
    printf("%d", *(ptraar + 2));
    // both are printing the address of the third element of the arr

    printf("\n%d", *(ptraar + 2));
    printf("\n%d\n", arr[2]);

    printf("%d\n",arr[1]);
    printf("%d\n", *(arr + 1)); // ye self dedfined pointer
    printf("%d\n", *(&arr[1]));
    printf("%d\n", *(ptraar + 1)); // or ye humne defined kiya hua pointer

    // both will print the value of the second index
    return 0;
}