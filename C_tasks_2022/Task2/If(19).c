//C program to enter student marks and find percentage and grade
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  Physics, Chemistry, Biology, Mathematics , Computer, per;
    printf("enter the grades of five subjects");
    scanf("%f%f%f%f%f",& Physics, &Chemistry, &Biology, &Mathematics ,& Computer);

    per =  (Physics + Chemistry + Biology + Mathematics + Computer)/5;
    printf("percentage = %f\n",per);

    if(per >= 90){
     printf("Grade A");
    }
    else if(per >= 80){
     printf("Grade B");
    }
    else if(per >= 70){
     printf("Grade C");
    }
    else if(per >= 60){
     printf("Grade D");
    }
    else if(per >= 40){
     printf("Grade E");
    }
    else{
     printf("Grade F");
    }
}
