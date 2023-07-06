//C program to find sum of digits using recursion

#include <stdio.h>
#include <stdlib.h>
int digitssum(int num);
int main()
{
    int num,sum;
    printf("enter a number");
    scanf("%d",&num);
    sum=digitssum(num);
    printf("digits sum of a number is %d",sum);
    return 0;
}
int digitssum(int num)
{
     if(num == 0)
        return 0;

    return ((num%10)+digitssum(num/10));
}
