//C program to find the last occurrence of a character in a string!!!!!!!!!
#include <stdio.h>
#include <stdlib.h>
# define size 100

int lastindexof(const char*str, const char character);
int main()
{
    char str[size];
    char character;
    int index;
    printf("enter a string \n");
    gets(str);
    printf("enter a character to search \n");
    character = getchar();
    index = lastindexof(str, character);
    if(index == -1)
        printf("'%c' is not found \n",character);
    else
        printf("'%c' is found \n",character);
        printf("the character appears %d times \n",index);
    return 0;
}

int lastindexof(const char*str, const char character)
{
    int index=-1;
    int i=0;
    while(str[i] != '\0')
    {
      if(str[i] == character)
       {
        index = i;
       }
       i++;
    return -1;
}
}
