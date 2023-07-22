//C program to perform all arithmetic operations
#include <stdio.h>
int main()
{
    int x,y;
    int sum,Difference, Product, Quotient ,Modulus;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of y");
    scanf("%d",&y);

    sum=x+y;
    Difference=x-y;
    Product=x*y;
    Quotient=x/y;
    Modulus=x%y;

    printf("sum is %d\n",sum);
    printf("Difference is %d\n",Difference);
    printf("Product is %d\n",Product);
    printf("Quotient is %d\n",Quotient);
    printf("Modulus is %d",Modulus);
    return 0;
}
