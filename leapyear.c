// write a code to check whther a year is leap year or not
#include <stdio.h>
int main(){
    int year;
    printf("Enter a year :");
    scanf("%d", &year);
    if(year%4==0){
        printf("The year is a leap year\n");
    }
    else{
        printf("The year is not a leap year\n");
    }
    return 0;
}