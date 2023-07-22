//C program to convert days to years,weeks and days
#include <stdio.h>
#include <stdlib.h>

int main()
{   int days,weaks, years;

    printf("enter days :");
    scanf("%d",&days);

    years = days/365;
    weaks = (days%365)/7;
    days = (days%365)%7;

    printf("years=%d\n",years);
    printf("weaks=%d\n",weaks);
    printf("days=%d",days);

    return 0;
}
