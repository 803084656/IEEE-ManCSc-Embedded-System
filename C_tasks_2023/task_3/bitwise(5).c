//C program to clear nth bit of a number
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, n, newNum;
    printf("enter a number");
    scanf("%d", &num);
    printf("enter nth bit to clear (0-31): ");
    scanf("%d", &n);
    newNum = num & (~(1 << n));
    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newNum);
    return 0;
}
