//C program to convert string to lowercase
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
     if(str[i]>='A' && str[i]<='Z')
       {
           str[i]=str[i]+32;
       }
    }
    printf("lowercase string is %s ",str);
    return 0;
}
