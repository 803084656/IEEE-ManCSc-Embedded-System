//C program to print all odd numbers from 1 to n
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter a numbet");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
        printf("%d ",i);
    }
    return 0;
}
