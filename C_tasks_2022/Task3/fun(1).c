//C program to find cube of a number using function
#include <stdio.h>
#include <stdlib.h>
int cube(int num);
int main()
{
  int num, n;
 printf("enter the number ");
 scanf("%d",&num);
 n=cube(num);
 printf("cube of %d is %d",num,n);
    return 0;
}
int cube(int num)
{
      return(num*num*num);
}
