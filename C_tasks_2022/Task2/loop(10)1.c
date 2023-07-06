//Program to count total digits in a given integer using loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int count=0;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0){
     count++;
     num /= 10;
    }
    printf("total digits = %d",count);
    return 0;
}
