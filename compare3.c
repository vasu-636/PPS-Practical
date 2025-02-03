// write a code to compare three number

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    if(a>=b && a>=c){
        printf("First number is greater than second and third number\n");
    }
    else if (b>=a && b>=c){
        printf("Second number is greater than first and third number\n");
    }
    else {
        printf("Third number is greater than first and second number\n");
    }
    return 0;
}