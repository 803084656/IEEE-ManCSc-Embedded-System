//C program to check whether two matrices are equal or not
#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{
    int arr1[size][size];
    int arr2[size][size];
    int row , colu ,equal;
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
    equal=1;
    for(row=0;row<size;row++){
        for(colu=0;colu<size;colu++){
        if(arr1[row][colu]!=arr2[row][colu])
           {
            equal=0;
            break;
           }
           }
           }
        if(equal==1){
            printf("array 1 is equal to array 2\n");
        }
        else{
            printf("array 1 is not equal to array 2");
        }
    return 0;
}
