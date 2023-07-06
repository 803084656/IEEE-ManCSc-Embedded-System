//C program to copy one string to another string
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str1[size];
    char str2[size];
    printf("enter a string \n");
    gets(str1);
    strcpy(str2,str1);
    printf("The first string %s \n",str1);
    printf("The second string %s \n",str2);
    return 0;
}
