//C program to find total number of alphabets, digits or special characters in a string
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    int alphabets,digits,characters;
    int i=0;
    alphabets,digits,characters=0;
    printf("enter the string \n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            characters++;
        }
    }
    printf("number of alphabets is %d \n",alphabets);
    printf("number of digits is %d \n",digits);
    printf("number of characters is %d",characters);
    return 0;
}
