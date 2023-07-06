//C program to compare two strings
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str1[size], str2[size];
    int result;
    printf("enter the first string ");
    gets(str1);
    printf("enter the second string ");
    gets(str2);
    result=strcmp(str1,str2);
    if(result == 0)
    {
        printf("two strings are equal");
    }
    else if(result < 0)
    {
        printf("the first string is less than the second string");
    }
    else
    {
        printf("the first string is greater than the second string");
    }
    return 0;
}
