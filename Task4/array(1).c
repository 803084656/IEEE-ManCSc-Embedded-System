//C program to declare, initialize, input and print array elements
#include <stdio.h>
#include <stdlib.h>
# define size 10
int main()
{
    int arr[size];
    int n ,i;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements of the array \n");
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
       }
    printf("elements of array are \n");
    for(i=0;i<n;i++){
      printf("%d",arr[i] );
       }

    return 0;
}
