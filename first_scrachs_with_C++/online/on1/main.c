#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10];
    int b=-1;
    size_t x;

    for(x=0;x<10;x++)
    {
        scanf("%c",&a[x]);
    }

    for(x=0;x<10;x++)
    {
        if(a[x]=='z' || a[x]=='Z')
           {
            b=x;
            break;
           }
    }
    if(b==-1)
        printf("%d",b);
    else
        printf("%d",b);
    return 0;
}
