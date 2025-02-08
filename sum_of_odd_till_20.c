// write a code to add all the odd number comes between 1 to 20.

#include <stdio.h>
int main(){
    int sum=0;
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("Sum of odd number till 20 is %d\n", sum);
    
    return 0;
}