//C program to find power of a number using for loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,exponent,power=1,i=0;
    printf("enter the value of base");
    scanf("%d",&base);
    printf("enter the value of exponent");
    scanf("%d",&exponent);
    for(i=0;i<=exponent;i++){
       power=power*base;
    }
    printf("%d ^ %d = %d ",base,exponent,power);
    return 0;
}
