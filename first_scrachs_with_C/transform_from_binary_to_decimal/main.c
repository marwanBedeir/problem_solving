#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n,x=0,y=0,z,m=1,o;
  int choice;
  printf("choose your operation\n");
  printf("1) transform from BINARY  to DECIMAL\n");
  printf("2) transform from OCTAL   to DECIMAL\n");
  printf("3) transform from HEXA    to DECIMAL {number only}\n");
  printf("4) transform from DECIMAL to BINARY\n");
  printf("5) transform from DECIMAL to OCTAL\n\n");

  printf("my choice is : ");
  scanf("%d",&choice);

  switch(choice)
  {
case 1 :
    printf("\nenter your number in BINARY\n");
    scanf("%d",&n);

  do
     {
        x=x+((n%10)*pow(2,y));
        n=n/10;
        y++;

     }while(n!=0);

     printf("the number in DICIMAL is : %d\n\n",x);
     break;

case 2 :
    printf("\nenter your number in OCTAL\n");
    scanf("%d",&n);

  do
     {

        x=x+((n%10)*pow(8,y));
        n=n/10;
        y++;

     }while(n!=0);

     printf("the number in DICIMAL is : %d\n\n",x);
     break;

case 3 :
    printf("\nenter your number in HEXA\n");
    scanf("%d",&n);

  do
     {
        z=n%10;
        x=x+(z*pow(16,y));
        n=n/10;
        y++;

     }while(n!=0);

     printf("the number in DICIMAL is : %d\n\n",x);
     break;

case 4 :
    printf("\nenter your number in DECIMAL : ");
    scanf("%d",&n);

    o=n; /**< we use {o} to not effect in the number */

  do{   /**< this loop made to fix the output number because it will missing all zeros in the right side */
       z=o%2;

       if (z==0)
         m=m*10;
       else if (z==1)
         break;

       o=o/2;

      }while(o!=0);

  do{   /**< this loop made to have the output number but it will be reverse and in some case miss some zeros  */

     z=n%2;
     y=y*10+z;
     n=n/2;

    }while(n!=0);

  do{   /**< this loop made to fix the output number and reverse it */


     x=x*10+(y%10);
     y=y/10;

    }while (y!=0);

    printf("\nthe number in BINARY is : %d\n\n",x*m); /**< x*m to have any zeros missing */
    break;

case 5 :
    printf("\nenter your number in DECIMAL : ");
    scanf("%d",&n);

    o=n; /**< we use {o} to not effect in the number */

  do{   /**< this loop made to fix the output number because it will missing all zeros in the right said */
       z=o%8;

       if (z==0)
         m=m*10;
       else if (z==1)
         break;

       o=o/8;

    }while(o!=0);

  do{  /**< this loop made to have the output number but it will be reverse and in some case miss some zeros  */

     z=n%8;
     y=y*10+z;
     n=n/8;

    }while(n!=0);

  do{   /**< this loop made to fix the output number and reverse it */


     x=x*10+(y%10);
     y=y/10;

    }while (y!=0);

    printf("\nthe number in OCTAL is : %d\n\n",x*m);  /**< x*m to have any zeros missing */
    break;

  }
    return 0;
}
