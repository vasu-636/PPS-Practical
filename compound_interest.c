// write a code to find compound interest
#include <stdio.h>
#include<math.h> 

int main() {
  float principal,rate,time; 
  printf("Enter the principal amount : ");
  scanf("%f", &principal);
  printf("Enter the rate of interest : ");
  scanf("%f", &rate);
  printf("Enter the time period in years : ");
  scanf("%f", &time);
  // Calculating compound Interest
  float Amount = principal * ((pow((1 + rate / 100), time)));
  float CI = Amount - principal;
  printf("Compound Interest is : %f",CI);
  return 0;
}