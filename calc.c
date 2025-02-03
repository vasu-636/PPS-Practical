// write a program to calulate sum , difference , multiplication and division of two numbers

#include <stdio.h>

int main() {
    float a,b,sum,diff,mul,div;
    printf("Enter first number :");
    scanf("%f", &a);
     printf("Enter second number :");
    scanf("%f", &b);
    sum = a+b;
    printf("Sum of %f and %f is %f\n",a,b,sum);
    diff = a-b;
    printf("Difference of %f and %f is %f\n",a,b,diff);
    mul = a*b;
    printf("Multiplication of %f and %f is %f\n",a,b,mul);
    div = a/b;
    printf("Division of %f and %f is %f\n",a,b,div);
    return 0;
}