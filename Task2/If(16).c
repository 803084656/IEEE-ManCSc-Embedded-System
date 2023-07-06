//C program to check whether triangle is valid or not if angles are given
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side1,side2,side3;
    printf("enter three sides of triangle");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3 && side3==side1)
    {
     printf("triangle is equilateral");
    }
    else if(side1==side2 || side2==side3 || side3==side1)
    {
     printf("triangle is isosceles");
    }
    else{
      printf("triangle is scalene");
    }

}
