//C program to find reverse of a string
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    printf("enter the string \n");
    gets(str);
    strrev(str);
    printf("The reverse of string is %s ",str);
    return 0;
}
