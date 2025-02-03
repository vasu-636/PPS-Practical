//write a program to compare two number

#include <stdio.h>
int main() {
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    if(a>b){
        printf("First number is greater than second number\n");
    }
    else {
        printf("Second number is greater than first number\n");
    }
    return 0;
}