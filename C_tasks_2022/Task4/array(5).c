//C program to find second largest number in array

#include <stdio.h>
#include <stdlib.h>
#define size 100
int main()
{
    int arr[10];
    int i,max1,max2;
    printf("enter the elements of array ");
    for(i=0; i<10; i++)
    {
     scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
      if(arr[i]>max1)
      {
          max2=max1;
          max1=arr[i];
      }
      else if (arr[i]>max2&&arr[i]<max1){
          max2 = arr[i];
      }
    }
     printf("first largest number is %d\n",max1);
     printf("second largest number is %d",max2);

    return 0;
}
