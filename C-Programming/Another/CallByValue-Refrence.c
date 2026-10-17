#include<stdio.h>
int add(int a, int b) // now a and b are the formal variable
{
    return a+b;
    int f = 9;
}
    // Actual parameter : When a function is called, the values that are passed in the call are called the arguments or actual parametes for example x and y.
    // Formal parameter : Formal parameters are local variables which are assigned values from the arguments when the function is called for example a and b.
int main(){
    // Call by Value
    int x = 1 ,y = 6; // x and y are the actual parameter
    int s = add(x,y); //iske andar x and y ki copy jaegi add ke andar 
                      // Now if we try to call variable f it will give error in main function because it is the local variable it will only live inside the add function.
    printf("%d",s);
    // Types of function calls in c are two types 
    // (i) Call by value : in this type we only gives the copy of actual parameter. 
    //                     which means that the original values remain unchanges ond only the parameters inside the function changes.
    // (ii) Call by reference : give the the copies the address of the actual parameter to the formal parameters.
    //                          which allows the function to change in the actual parameter.


    // Call by Reference

    // #include<stdio.h>

    // void swap(int *x, int *y){
    //     int temp = *x;
    //     *x = *y;
    //     *y = temp;
    //     return ;
    // }

    // int main(){
    //     int a = 8, b = 9;
    //     swap(&a,&b);
    //     printf("The value of the a is: %d\n",a);
    //     printf("The value of the b is: %d",b);
    //     return 0;
    // }
    return 0;    
}