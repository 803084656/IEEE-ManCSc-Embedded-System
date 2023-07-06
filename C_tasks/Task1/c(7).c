//C program to convert centimeter to meter and kilometer
#include <stdio.h>
#include <stdlib.h>

int main()
{   float length_in_centimeter,length_in_meter,length_in_kilometer;

    printf("Enter length in centimeter :");
    scanf("%f",&length_in_centimeter);

     length_in_meter=length_in_centimeter/100;
     length_in_kilometer=length_in_centimeter/100000;

     printf("length in meter is %f\n",length_in_meter);
     printf("length in kilometer is %f",length_in_kilometer);

    return 0;
}
