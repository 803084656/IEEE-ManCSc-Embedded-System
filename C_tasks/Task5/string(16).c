//C program to search all occurrences of a character in a string
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    char search;
    int i;
    printf("enter the string \n");
    gets(str);
    printf("enter the search character \n");
    search=getchar();
    for(i=0;str[i]!='\0';i++)
    {
     if(str[i] == search)
     {
         printf("the character %c is found at index %d \n",search,i);
     }
    }
    return 0;
}
