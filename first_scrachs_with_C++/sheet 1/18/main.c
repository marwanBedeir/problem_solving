#include <stdio.h>
#include <stdlib.h>

int diff(int x,int y)
{
  return x-y;
}

int main()
{
    size_t x,y,z;
    int num[10];
    int smallest,greatest,dif,occur=0,a=0;

    printf("  Enter ten numbers \n");
    for(x=0;x<10;x++)
    {
      scanf("%d",&num[x]);
    }

    smallest=num[0];
    greatest=num[0];

    for(x=1;x<10;x++)
    {
        if(num[x]<smallest)
            smallest=num[x];
    }

     for(x=1;x<10;x++)
    {
        if(num[x]>greatest)
            greatest=num[x];
    }

    dif=diff(greatest,smallest);

    for(x=0;x<10;x++)
    {
        occur=0;
        for(y=0;y<10;y++)
        {
            if(x!=y)
            {
              if(num[x]==num[y])
              {
               occur++;
              }
            }
        }
        if(occur>a)
            {
            a=occur;
            z=x;
            }
    }

    printf("\n The entered number is : ( ");
    for(x=0;x<10;x++)
    {
        printf("%d ",num[x]);
    }
    printf(")\n\n The difference between the smallest and greatest values is : (%d)\n\n",dif);

    if(a==0)
        printf(" <<<No Number repeated>>>\n\n");
    else
    {
        printf(" The value that occur the most is : (%d)",num[z]);
        printf(" With frequency (%d)\n\n",++a);
    }
    return 0;
}
