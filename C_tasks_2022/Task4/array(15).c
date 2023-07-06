//C program to merge two sorted array
#include <stdio.h>
#include <stdlib.h>
#define size 100
int main()
{
    int arr1[size],arr2[size],arr3[size*2];
    int i , size1,size2,size3, index1,index2,index3;
    printf("enter the size of first array\n");
    scanf("%d", &size1);
    printf("enter the elements of first array\n");
    for(i=0;i<size1;i++)
    {
      scanf("%d",&arr1[i]);
    }
    printf("enter the size of second array\n");
    scanf("%d", &size2);
    printf("enter the elements of second array\n");
    for(i=0;i<size2;i++)
    {
      scanf("%d",&arr2[i]);
    }
    size3=size1+size2;
     index1 = 0;
    index2 = 0;
    for(index3=0;index3<size3;index3++)
    {
       if(index1>=size1 || index2>=size2)
        {
            break;
        }


        if(arr1[index1]<arr2[index2])
        {
            arr3[index3]=arr1[index1];
            index1++;
        }
        else
        {
            arr3[index3]=arr2[index2];
            index2++;
        }
    }
     while(index1<size1)
    {
        arr3[index3]=arr1[index1];
        index3++;
        index1++;
    }
    while(index2<size2)
    {
        arr3[index3]=arr2[index2];
        index3++;
        index2++;
    }
    printf("elements of merged array is\n");
    for(i=0; i<size3; i++)
    {
        printf("%d\t",arr3[i]);
    }


    return 0;
}
