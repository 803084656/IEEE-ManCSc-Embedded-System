//C program to find perimeter of a rectangle
#include <stdio.h>

int main()
{
    float length,width,perimeter;
    printf("enter the length:");
    scanf("%f",&length);
    printf("enter the width:");
    scanf("%f",&width);
    perimeter=(length+width)*2;
    printf("perimeter of rectangular is %f",perimeter);
    return 0;
}
