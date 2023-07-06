//C program to subtract two matrices
#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{
    int arr1[size][size];
    int arr2[size][size];
    int arr3[size][size];
    int row , colu;
    printf("enter the elements of array1 \n");
    for(row=0;row<size;row++){
        for(colu=0;colu<size;colu++){
            scanf("%d",&arr1[row][colu]);
        }
    }
    printf("enter the elements of array2 \n");
    for(row=0;row<size;row++){
        for(colu=0;colu<size;colu++){
            scanf("%d",&arr2[row][colu]);
        }
    }
    for(row=0;row<size;row++){
        for(colu=0;colu<size;colu++){
            arr3[row][colu]=arr1[row][colu]-arr2[row][colu];
        }
    printf("\n enter the elements of array3 of subtract \n");
      for(row=0;row<size;row++){
        for(colu=0;colu<size;colu++){
                printf("%d",arr3[row][colu]);
        }
        printf("\n");
      }
    return 0;
}
}
