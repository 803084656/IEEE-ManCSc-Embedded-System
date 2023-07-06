//C program to sort array in ascending or descending order
#include <stdio.h>
#include <stdlib.h>
#define size100
int main()
{
    int arr[size];
    int i,size,temp;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++){
       for(j=i+1;j<size;j++){
         if(arr[i]>arr[j]){
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
       }
      }
    }
    printf("elements of array in ascending or descending order");
    for(i=0;i<size;i++){
     printf("%d\t", arr[i]);
    }
    return 0;
}
