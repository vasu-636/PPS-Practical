// write a code to calculate simple interest 
#include <stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter the principal amount :");
    scanf("%f", &p);
    printf("Enter the rate of interest :");
    scanf("%f", &r);
    printf("Enter the time period in years :");
    scanf("%f", &t);
    si=(p*r*t)/100;
    printf("The simple interest of principal amount %f at rate of interest %f for time period %f years is %f\n",p,r,t,si);

    return 0; 
}