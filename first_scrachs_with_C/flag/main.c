#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,flag,n;

  scanf("%d",&n);
  flag=0;

  for(i=2;i<=n-1;i++)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }

  if(flag==0)
    printf("prime");

  else printf("not prime");

    return 0;
}
