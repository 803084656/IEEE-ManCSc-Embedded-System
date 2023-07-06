//C program to find the first occurrence of a character in a string!!!!!!!!!!!
#include <stdio.h>
#include <stdlib.h>
# define size 100

int indexof(const char*str, const char character);
int main()
{
    char str[size];
    char character;
    int index;
    printf("enter a string \n");
    gets(str);
    printf("enter a character to search \n");
    character = getchar();
    index = indexof(str, character);
    if(index == -1)
        printf("'%c' is not found \n",character);
    else
        printf("'%c' is found \n",character);
        printf("the character appears %d times \n",index);
    return 0;
}

int indexof(const char*str, const char character)
{
    int i=0;
    while(str[i] != '\0')
    {
      if(str[i] == character)
       return i;
       i++;
    }
    return -1;
}
