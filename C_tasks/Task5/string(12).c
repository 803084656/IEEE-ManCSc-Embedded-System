//a new idea
//C program to check whether a string is palindrome or not
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    printf("enter a string \n");
    gets(str);
    int length;
    int firstindex =0;
    int lastindex = length -1;
    for(length=0;str[length]!='\0';length++)
    {
        while(firstindex<=lastindex)
    {
        if(str[firstindex] != str[lastindex])
            break;
            firstindex++;
            lastindex--;
    }

       if(firstindex>=lastindex)
      {
        printf("the string is Palindrome \n");
      }
       else
      {
        printf("the string is not Palindrome");
      }
    }
    return 0;
}
