#include <stdio.h>
#include <stdlib.h>

int pos(char a[],size_t x)
{
  for(x=0;x<10;x++)
    {
        if(a[x]=='z' || a[x]=='Z')
           {
             return ++x;
           }
    }
    return -1;
}

int main()
{
    char a[10];
    int b;
    size_t x;

    printf(" Enter ten characters\n\n\n");
    for(x=0;x<10;x++)
    {
        scanf("%c",&a[x]);
    }

    b=pos(a,x);

    if(b==-1)
        printf("\n\n there is no (Z)\n\n");
    else
        printf("\n\n The first (Z) character is number : %d\n\n",b);
    return 0;
}
