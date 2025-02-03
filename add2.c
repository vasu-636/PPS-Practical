// write a code to add two number
#include <stdio.h>
int main(){
    float a,b,sum;
    printf("Enter first number :");
    scanf("%f", &a);
    printf("Enter second number :");
    scanf("%f", &b);
    sum = a+b;
    printf("The sum of %f and %f is %f\n", a,b,sum);
    return 0;
}