//C program to print natural numbers in reverse from n to 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
      printf("%d ",i);
    }
    return 0;
}
