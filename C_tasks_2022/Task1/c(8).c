//C program to convert temperature from degree celsius to fahrenheit
#include <stdio.h>

int main()
{   float Celsius_temp,Fahrenheit_temp;

    printf("enter temperature in Celsius :");
    scanf("%f",&Celsius_temp);

    Fahrenheit_temp = (Celsius_temp* 9/5)+32;

    printf("Temperature in Fahrenheit = %f F",Fahrenheit_temp);

    return 0;
}
