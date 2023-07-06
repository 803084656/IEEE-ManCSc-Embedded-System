//مش شغال ليييه
//C program to copy all elements of one array to another
#include <stdio.h>
#include <stdlib.h>
#define size 100
int main()
{
    int arr1[10];
    int arr2[10];
    int i ;
    printf("enter the elements of array1\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
     for(i=0;i<10;i++)
     {
         arr1[i]=arr2[i];
     }
     printf("elements of array 1 is \n");
    for(i=0;i<10;i++)
     {
      printf("%d\t",arr1[i]);
     }
      printf("\n elements of array 2 is \n");
    for(i=0;i<10;i++)
     {
      printf("%d\t",arr2[i]);
     }
    return 0;
}

