//C program count total duplicate elements in array
#include <stdio.h>
#include <stdlib.h>
#define size 100
int main()
{
    int arr[size];
    int i, size , j, count=0;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements of array");
    for(i=0;i<size;i++)
    {
        scanf(%d,&arr[i]);
    }
    for(i=0;i<size;i++)
    {
       for(j=i+1;j<size;j++)
       {
           if(arr[i]==arr[j])
           {
             count++;
           }
       }
    }
    printf(" total duplicate elements in array is %d",count);
    return 0;
}
