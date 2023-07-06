#include <stdio.h>
#include <stdlib.h>
# define size 100
int main()
{
    /*initialization an array as a char to save the names of students*/
    int arr[20];
    char array[][20]={"Ali","Ahmed","Mohamed","Mahmoud","Walid","Mostafa","kamil","Abdo","zein","Omar",
                   "Yomna","Marwa","Magda","Amira","Hana","Nora","Bosy","Hend","Nada","Yara"};
    int i;
    int sum=0;
    int average=0;
    int max=0;
    printf("Names of Students \n");
    for(i=0; i<20 ; i++)
    {
     printf("%s\n",array[i]);
    }
    /*Enter the scores of students*/
    printf("enter the scores of students \n");
    for(i=0; i<20 ; i++)
    {
     scanf("%d",&arr[i]);
    }
    /*calculate the sum and the average of scores*/
    for(i=0;i<20;i++){
     sum = sum + arr[i];
     average = (sum / 20);
    }
    printf("sum of scores is %d \n",sum);
    printf("the average of scores is %d \n",average);
    /*determine the scores of students which less than the average and warning them*/
    for(i=0;i<20;i++){
      if(arr[i]>average)
      {
        printf("The high scores are %d \n",arr[i]);
      }
      if(arr[i]<average)
      {
        printf("The lowest scores are %d \n",arr[i]);
        printf("Warning you should work hard \n");
      }
    }
    /*determine the highest score and appreciate him*/
    for(i=1;i<20;i++){
      if(arr[i]>max)
      {
          max=arr[i];
      }
     printf("The largest score is %d\n",max);
     printf("Thank you so much. We are proud of you.");
    return 0;
}
}
