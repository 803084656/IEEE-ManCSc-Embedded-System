//C program to find diameter, circumference and area of circle using function

#include <stdio.h>
#include <stdlib.h>
double getdiameter(double redius);
double getcircumference (double redius);
double getarea (double redius);
int main()
{
    float redius,diameter,circumference,area;
    printf("enter the redius ");
    scanf("%f",&redius);
    diameter=getdiameter(redius);
    circumference= getcircumference(redius);
    area=getarea(redius);
    printf("Diameter of circle is %f\n",redius);
    printf("Circumference of circle is %f\n",circumference);
    printf("Area of circle is %f\n",area);
    return 0;
}
double getdiameter(double redius)
{
    return(2*redius);
}
double getcircumference (double redius)
{
    return(2*3.14*redius);
}
double getarea (double redius)
{
       return(3.14*redius*redius);
}
