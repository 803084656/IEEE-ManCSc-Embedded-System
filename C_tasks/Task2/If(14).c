//C program to check whether triangle is valid or not if angles are given
#include <stdio.h>
int main()
{
    int angle1,angle2,angle3,sum;
    printf("enter the values of three angles");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180 && angle1>0 && angle2>0 && angle3>0)
    {
        printf("The triangle is valid");
    }
    else{
       printf("The triangle is not valid");
    }

}
