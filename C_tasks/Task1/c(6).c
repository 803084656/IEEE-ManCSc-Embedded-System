//C program to find diameter, circumference and area of circle
#include <stdio.h>

int main()
{
    float redius,diameter,Circumference,area;
    printf("enter the redius:");
    scanf("%f",&redius);

    diameter= redius *2;
    Circumference=2*3.14*redius;
    area=3.14*redius*redius;

    printf("diameter is %f units\n",diameter);
    printf("Circumference is %f units\n",Circumference);
    printf("area is %f sq.units",area);

    return 0;
}
