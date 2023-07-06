/*//C program to count frequency of each character in a string!!!!!!!!
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    int i,j,n;
    int count=0;
    printf("enter the string \n");
    gets(str);
    for(i=0;str[i];i++)
        n=i;
        printf("count frequency of each character in a string : \n");
    for(j=0;j<n;j++)
    {
        if(str[j])
        {
            for(i=j+1;i<n;i++)
            {
                if(str[j]==str[i])
                {
                    count++;
                    str[i]='\0';
                }
            }
           printf("'%c' =%d \n",str[j],count);
        }
    }
    return 0;
}*/
//another code searched about it
#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    char str[size];
    int i;
    int freq[256]={0};
    printf("enter the string \n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            printf("'%c'appears %d times \n",i,freq[i]);
        }
    }
}
