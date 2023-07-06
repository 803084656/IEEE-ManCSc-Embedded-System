//C program to enter basic salary and calculate gross salary of an employee
#include <stdio.h>
int main()
{
    float basic,gross,HRA,DA;
    printf("enter the basic salary");
    scanf("%f",&basic);
    if(basic <= 10000)
    {
         HRA = 0.2 * basic;
          DA = 0.8 * basic;
    }
    else if(basic <= 20000){
         HRA = 0.25 * basic;
          DA = 0.9 * basic;
    }
    else{
         HRA = 0.3* basic;
          DA = 0.95 * basic;
    }
    gross = basic + HRA + DA;
    printf("Gross salary =%.2f",gross);

}
