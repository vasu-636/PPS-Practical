// write a code to check whwther a number is positive or negative
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    if (num == 0) {
        printf("%d is Zero\n",num);
    }
    else if (num < 0) {
        printf("%d is  Negative\n",num);
    }
    else {
        printf("%d is Positive\n",num);
    }

    return 0;
}