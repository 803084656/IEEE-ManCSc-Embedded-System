//C program to find product of digits of a number مش فاهماها
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int product=1;
    printf("enter a number");
    scanf("%d",&num);
    product = (num == 0 ? 0 : 1ll);
    while(num!=0){
      product = product * (num % 10);
       num = num / 10;
    }
    printf("product of digits = %d ",product);
    return 0;
}

