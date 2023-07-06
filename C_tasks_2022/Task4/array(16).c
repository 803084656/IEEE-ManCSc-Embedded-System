//C program to find reverse of array
#include <stdio.h>
#include <stdlib.h>
#define size100
int main()
{
    int arr[size];
    int i,size;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("the reversed elements of array\n");
    for(i=size-1;i>=0;i--)
    {
      printf("%d\t",arr[i]);
    }
    return 0;
}
