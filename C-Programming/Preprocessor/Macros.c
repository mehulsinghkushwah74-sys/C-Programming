#include<stdio.h>
#define PI 3.141592
#define area(r) (PI*r*r)
int main(){
    double x = PI;
    printf("%lf\n",x);
    printf("%.10f\n",x);
    printf("%f\n",PI);
    printf("%f",area(10));
}