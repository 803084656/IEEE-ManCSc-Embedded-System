// C program to find length of a string using for loop
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    printf("enter a string ");
    gets(str);
    printf("length of the string is %d ",strlen(str));
    return 0;
}
