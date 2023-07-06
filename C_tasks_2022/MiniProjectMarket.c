#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name;
    int overnight;
    double total, price;
    printf("enter 'a' if you need tea\n");
    printf("enter 'b' if you need sugar\n");
    printf("enter 'c' if you need milk\n");
    printf("enter 'd' if you need bread\n");
    printf("enter 'e' if you need meat\n");
    printf("enter 'f' if you need chicken\n");
    printf("enter your order\n");
    scanf("%c",&name);
    switch(name){
     case'a':
         price = 40;
         printf("price of tea is %f\n",price);
      break;
         case'b':
         price = 10;
         printf("price of sugar is %f\n",price);
      break;
           case'c':
         price = 20;
         printf("price of milk is %f\n",price);
      break;
           case'd':
         price = 5;
         printf("price of bread is %f\n",price);
      break;
           case'e':
         price = 100;
         printf("price of meat is %f\n",price);
      break;
           case'f':
         price = 50;
         printf("price of chicken is %f\n",price);
      break;
          default:
              printf("unavailable item");
    }
    if(price<10)
    {
        total=price+2;
    }
    else {
        total=price+3;
    }
    printf("enter 1 if it is overnight");
    scanf("%d",& overnight);
    switch(overnight){
         case 0:
             total=price;
            break;
          case 1:
             total=price+5;
            break;
    }
    printf("Total cost of shopping is %f \n",total);
    return 0;
}
