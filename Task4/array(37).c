//C program to find determinant of a matrix
#include <stdio.h>
#include <stdlib.h>
#define size 2
int main()
{
    int arr[size][size];
    int row , colu;
    int determine=0;
    printf("enter the elements of array\n");
    for(row=0;row<size;row++){
        for(colu=0;colu<size;colu++){
            scanf("%d",&arr[row][colu]);
        }
    }
    determine = (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0] );
    printf("determinant of a matrix is %d ",determine);
    return 0;
}
