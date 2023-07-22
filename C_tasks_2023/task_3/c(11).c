//C program to find power of a number using pow function
#include <stdio.h>

int main()
{   int base ,exponent,result;

    printf("enter base");
    scanf("%d",&base);
    printf("enter exponent");
    scanf("%d",&exponent);

    result = pow(base,exponent);

    printf("result is %d",result);
    return 0;
}
