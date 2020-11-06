#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,z=0,a=0,b=0,o,zero=1,answer=0,n=0,sum;

  int choice;
  printf("choose your operation\n");
  printf("1) summation\n");
  printf("2) subtraction \n");
  printf("3) multiplication \n\n");

  printf("my choice is : ");
  scanf("%d",&choice);

  switch(choice)
  {
case 1 :
    printf("\n\nThe first number is : ");
    scanf("%d",&x);

    printf("\n\nThe second number is : ");
    scanf("%d",&y);

      do
     {
        a=a+((x%10)*pow(2,z));
        x=x/10;
        z++;

     }while(x!=0);
     z=0;
  do
     {
        b=b+((y%10)*pow(2,z));
        y=y/10;
        z++;

     }while(y!=0);

     sum=a+b;

     o=sum; /**< we use {o} to not effect in the number */

  do{   /**< this loop made to fix the output number because it will missing all zeros in the right said */
       z=o%2;

       if (z==0)
         zero=zero*10;
       else if (z==1)
         break;

       o=o/2;

      }while(o!=0);

  do{   /**< this loop made to have the output number but it will be reverse and in some case miss some zeros  */

     z=sum%2;
     answer=answer*10+z;
     sum=sum/2;

    }while(sum!=0);

  do{   /**< this loop made to fix the output number and reverse it */


     n=n*10+(answer%10);
     answer=answer/10;

    }while (answer!=0);

    printf("\n\n\nThe answer is : %d\n\n",n*zero);
    break;

case 2 :

    printf("\n\nThe first number is : ");
    scanf("%d",&x);

    printf("\n\nThe second number is : ");
    scanf("%d",&y);

      do
     {
        a=a+((x%10)*pow(2,z));
        x=x/10;
        z++;

     }while(x!=0);
     z=0;
  do
     {
        b=b+((y%10)*pow(2,z));
        y=y/10;
        z++;

     }while(y!=0);

     sum=a-b;

     o=sum; /**< we use {o} to not effect in the number */

  do{   /**< this loop made to fix the output number because it will missing all zeros in the right said */
       z=o%2;

       if (z==0)
         zero=zero*10;
       else if (z==1)
         break;

       o=o/2;

      }while(o!=0);

  do{   /**< this loop made to have the output number but it will be reverse and in some case miss some zeros  */

     z=sum%2;
     answer=answer*10+z;
     sum=sum/2;

    }while(sum!=0);

  do{   /**< this loop made to fix the output number and reverse it */


     n=n*10+(answer%10);
     answer=answer/10;

    }while (answer!=0);

    printf("\n\n\nThe answer is : %d\n\n",n*zero);
    break;

case 3 :

        printf("\n\nThe first number is : ");
    scanf("%d",&x);

    printf("\n\nThe second number is : ");
    scanf("%d",&y);

      do
     {
        a=a+((x%10)*pow(2,z));
        x=x/10;
        z++;

     }while(x!=0);
     z=0;
  do
     {
        b=b+((y%10)*pow(2,z));
        y=y/10;
        z++;

     }while(y!=0);

     sum=a*b;

     o=sum; /**< we use {o} to not effect in the number */

  do{   /**< this loop made to fix the output number because it will missing all zeros in the right said */
       z=o%2;

       if (z==0)
         zero=zero*10;
       else if (z==1)
         break;

       o=o/2;

      }while(o!=0);

  do{   /**< this loop made to have the output number but it will be reverse and in some case miss some zeros  */

     z=sum%2;
     answer=answer*10+z;
     sum=sum/2;

    }while(sum!=0);

  do{   /**< this loop made to fix the output number and reverse it */


     n=n*10+(answer%10);
     answer=answer/10;

    }while (answer!=0);

    printf("\n\n\nThe answer is : %d\n\n",n*zero);
    break;
   }
    return 0;
}
