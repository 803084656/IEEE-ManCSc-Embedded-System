//C program to create calculator using switch case and functions
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    float result=0;
    char op;
    printf("enter the operator and the value of two numbers");
    scanf("%f %c %f",&a,&op,&b);
    switch(op){
  case '+':
      result= a+b;
  break;
  case '-':
      result=a-b;
  break;
   case '*':
      result=a*b;
  break;
   case '/':
     result=a/b;
  break;
   default:
     printf("invalid operator");
    }
    printf("%f = %f %c %f",result,a,op,b);
    return 0;
}
