//C program to find prime numbers in given range using functions impo****
#include <stdio.h>
#include <stdlib.h>
int isPrime(int num);
void printPrimes(int lowerlimit,int upperlimit);
int main()
{
    int lowerlimit,upperlimit;

    printf("enter the upper and the lower limits of the range ");
    scanf("%d%d",&lowerlimit,&upperlimit);
    printPrimes(lowerlimit,upperlimit);

    return 0;
}
int isPrime(int num)
{
    for(int i=2;i<num/2;i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
}
void printPrimes(int lowerlimit,int upperlimit)
{
  printf("all prime number between %d to %d are ",lowerlimit,upperlimit);
    while(lowerlimit <= upperlimit)
    {
        if(isPrime(lowerlimit))
        {
            printf("%d,",lowerlimit);
        }

        lowerlimit++;
    }
}
