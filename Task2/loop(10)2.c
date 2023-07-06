//Logic to count number of digits without using loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int count=0;
    printf("enter a number");
    scanf("%d",&num);
    if(num!=0){
      count= (log10(num) + 1);
      printf("total digits = %d",count);
    }
    else{
        printf("total digit is zero");
    }
    return 0;
}

