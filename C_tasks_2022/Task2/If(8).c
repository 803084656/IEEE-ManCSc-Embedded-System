//C program to check vowel or consonant

#include <stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i'||ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I')
    {printf(" '%c' is vowel",ch);
    }
    else if((ch >= 'a' && ch >= 'z')||(ch >= 'A' && ch >= 'Z'))
    {printf(" '%c' is Consonant",ch);
    }
    else
    {printf(" '%c' is not an alphabet",ch);
    }
    return 0;
}
