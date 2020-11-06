#include <stdio.h>
#include <stdlib.h>

int prime(int x)
{
  int i,flag;

  flag=0;

  for(i=2;i<=x-1;i++)
  {
      if(x%i==0)
      {
          flag=1;
          break;
      }
  }
return flag;
}

int main()
{
  int x,y;

  scanf("%d",&x);
  y=prime(x);

  if (y==0)
    printf("prime");
  else
    printf("not prime");


    return 0;
}
