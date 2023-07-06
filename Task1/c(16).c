//C program to calculate total average and percentage of five subjects
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,m,n;
    float total,average,percentage;
    printf("enter the value of five numbers");
    scanf("%f%f%f%f%f",&x,&y,&z,&m,&n);

    total=x+y+z+m+n;
    average=total/5;
    percentage=(total/500)*100;

    printf("total is %f\n",total);
    printf("average is %f\n",average);
    printf("percentage is %f",percentage);


}
