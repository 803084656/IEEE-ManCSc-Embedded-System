//C program to find sum of each row and columns of a matrix
#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{
    int arr[size][size];
    int row , colu;
    int sum=0;
    printf("enter the elements of array\n");
    for(row=0;row<size;row++){
        for(colu=0;colu<size;colu++){
            scanf("%d",&arr[row][colu]);
        }
    }
    for(row=0;row<size;row++){
            sum=0;
        for(colu=0;colu<size;colu++){
                sum=sum+arr[row][colu];
        }
        printf("sum elements of row %d is %d \n",row+1,sum);
        }
    for(colu=0;colu<size;colu++){
        sum=0;
      for(row=0;row<size;row++){
                sum=sum+arr[row][colu];
        }
        printf("sum elements of column %d is %d \n",colu+1,sum);
        }

    return 0;
}
