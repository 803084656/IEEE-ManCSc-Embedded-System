//C program to find maximum and minimum using functions

#include <stdio.h>
#include <stdlib.h>
int max(int num1, int num2);
int min(int num1, int num2);

int main()
{
    int num1,num2,maximum,minimum;
    printf("enter the two numbers ");
    scanf("%d %d",&num1,&num2);
    maximum = max(num1, num2);
    minimum = min(num1, num2);
    printf("the maximum number is %d\n",maximum);
    printf("the minimum number is %d\n",minimum);
    return 0;
}
int max(int num1, int num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}
int min(int num1, int num2)
{
    if(num1<num2)
        return num1;
    else
        return num2;
}
