//C program to concatenate two strings
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str1[size];
    char str2[size];
    strcpy(str1,"Ich bin ");
    strcpy(str2,"Yomna");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
