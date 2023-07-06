//A new idea
//C program to remove all occurrences of a character from string
#include <stdio.h>
#include <stdlib.h>
# define size 100
void removeAll(char*,const char);
int main()
{
    char str[size];
    char remove;
    printf("enter the string \n");
    gets(str);
    printf("enter the character to remove it from string \n");
    remove = getchar();
    removeAll(str,remove);
    printf("the string after removing '%c': %s",remove,str);
    return 0;
}
void removeAll(char*str,const char remove)
{
    int i,j;
    int length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]==remove)
        {
            for(j=i;j<length;j++)
            {
                str[j]=str[j+1];
            }
            length--;
            i--;
        }
    }
}
