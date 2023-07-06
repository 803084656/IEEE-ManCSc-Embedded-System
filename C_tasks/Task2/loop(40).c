//C program to convert Binary to Decimal number system
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binary,decimal=0;
    int count=0;
    printf("enter a binary number");
    scanf("%d",&binary);
    do{
            if(binary % 10 == 1)
        {
            decimal += pow(2,count);
        }
        count++;
        binary/=10;
    }
    while(binary!=0);
    printf("decimal number=%d",decimal);
    return 0;
}
