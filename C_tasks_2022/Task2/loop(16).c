//C program to find reverse of a number مش فاهماها
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num , reverse;
   printf("enter the number to reverse it");
   scanf("%d",&num);
   while(num!=0){
         reverse = (reverse * 10) + (num % 10);
         num /= 10;
   }
   printf("reverse of number = %d",reverse);
    return 0;
}
