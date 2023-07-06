//C program to trim leading white spaces from a string
#include <stdio.h>
#include <stdlib.h>
# define size 100
void trimLeading(char * str);
int main()
{
    char str[size];
    printf("enter a string \n");
    gets(str);
    printf("String before trimming leading white space %s \n", str);
    trimLeading(str);
    printf("\n\nString after trimming leading white space %s \n", str);
    return 0;
}
void trimLeading(char * str)
{
    int index=0;
    int i,j;
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }
    if(index != 0)
    {
        i = 0;
        while(str[i + index] != '\0')
        {
            str[i] = str[i + index];
            i++;
        }
        str[i] = '\0';
    }
}
