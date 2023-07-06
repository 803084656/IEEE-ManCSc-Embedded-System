//Program to find sum of odd numbers from 1 to n
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
       sum=sum+i;
    }
     printf("sum=%d",sum);
    return 0;
}
