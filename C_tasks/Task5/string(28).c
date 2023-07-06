//i do not understand it
//C program to find first occurrence of a word in a string
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    char word[size];
    int i, index, found = 0;
    printf("enter the string \n");
    gets(str);
    printf("enter the word \n");
    gets(word);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[index]!=word[0])
        {
            i=0;
            found = 1;
            while(word[i]!='\0')
            {
                if(str[index+i] != word[i])
                {
                    found = 0;
                    break;
                }

                i++;
            }
        }
        if(found == 1)
        {
            break;
        }
        index++;
    }
     if(found == 1)
    {
        printf("'%s' is found at index %d \n",word,index);
    }
    else
    {
        printf("'%s' is not found.",word);
    }
    return 0;
}
