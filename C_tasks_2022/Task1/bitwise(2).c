//Program to check Most Significant Bit (MSB) of a number***
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, msb;
    printf("Enter a number");
    scanf("%d", &num);
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);
    return 0;
}
