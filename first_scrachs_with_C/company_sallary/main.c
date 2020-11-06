#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rate,x;
    char z[100];

    printf("writ (end) to finish this program\n\n");

    printf("enter the name of an employee\n");
    scanf("%s",&z);

    while (z!='end')
{
   if (z=='end')
      return 0;

    printf("what is the %s`s rate in hour\n",z);
    scanf("%d",&rate);

    printf("what is the number of hours that he worked\n");
    scanf("%d",&num);

    x=num*rate;
    printf("\n%s`s salary is : %d\n",z,x);

    printf("\n\n\nenter the name of next employee\n");
    scanf("%s",&z);
};
    return 0;
}
