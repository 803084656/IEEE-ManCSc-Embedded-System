//C program to print even or odd numbers in given range using recursion
#include <stdio.h>
#include <stdlib.h>
void printoddeven(int num,int limit);
int main()
{
    int smallest,largest;
    printf("enter the smallest number");
    scanf("%d",&smallest);
    printf("enter the largest number");
    scanf("%d",&largest);
    printf("even or odd numbers from %d to %d ",smallest,largest);
    printoddeven(smallest,largest);
    return 0;
}
void printoddeven(int num,int limit)
{
  if(num>limit)
  return;
  printf("%d ",num);
  printoddeven(num+2,limit);
}
