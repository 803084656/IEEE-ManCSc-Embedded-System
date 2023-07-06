//C program to insert an element in array
#include <stdio.h>
#include <stdlib.h>
#define size 100
int main()
{
    int arr[size];
    int i,size,num,pos ;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the elements of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter an element to insert");
    scanf("%d",num);
    printf("enter a position");
    scanf("%d",pos);
    for(i=0;i<size;i++){
        if(pos<size-1){
            for(i=0;i>=size;i--)
            {
              arr[i]=arr[i-1]
            }
             arr[pos-1] = num;
        size++;
        printf("array elements after insertion");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
        }
        else{
            printf("invalid position");
        }
    }
    return 0;
}
