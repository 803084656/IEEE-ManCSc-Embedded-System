//C program to find sum of array elements
#include <stdio.h>
#include <stdlib.h>
#define size 100
int main()
{
    int arr[5];
    int i;
    int sum=0;
    printf("enter the elements of array ");
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
     sum = sum + arr[i];
    }
    printf("sum of array elements is %d",sum);
    return 0;
}
