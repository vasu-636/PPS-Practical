// write a code to sum even number till 20.

#include <stdio.h>
int main(){
    int sum=0;
    for(int i=0; i<=20; i++){
        if(i%2==0){
            sum+=i;        
        }    
    }
    printf("Sum of even number till 20 is %d\n",sum);
    return 0;
}