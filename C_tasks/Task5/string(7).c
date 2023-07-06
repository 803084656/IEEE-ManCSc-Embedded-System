//C program to toggle case of each character in a string
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    int i;
    printf("enter a string ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
     if(str[i]>='a' && str[i]<='z')
       {
           str[i]=str[i]-32;
       }
    }
    printf("toggle case string is %s ",str);
    return 0;
}
