//C program to check symmetric matrix
#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{
    int arr[size][size];
    int row , colu;
    printf("enter the elements of array\n");
    for(row=0;row<size;row++){
        for(colu=0;colu<size;colu++){
            scanf("%d",&arr[row][colu]);
        }
    }
    if(arr[0][1]==arr[1][0] && arr[0][2]==arr[2][0] &&
       arr[1][0]==arr[0][1] && arr[1][2]==arr[2][1]&&
       arr[2][0]==arr[0][2]&&arr[2][1]==arr[1][2])
    {
        printf("matrix is symmetric");
    }
    else{
        printf("matrix is not symmetric");
    }

    return 0;
}
