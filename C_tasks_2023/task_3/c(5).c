//C program to find area of a rectangle
#include <stdio.h>

int main()
{
    float length,width,area;
    printf("enter the length:");
    scanf("%f",&length);
    printf("enter the width:");
    scanf("%f",&width);
    area=length*width;
    printf("area of rectangular is %f",area);
    return 0;
}

