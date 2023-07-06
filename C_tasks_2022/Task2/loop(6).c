//C program to find sum of natural numbers from 1 to n
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n;
    int sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
}
