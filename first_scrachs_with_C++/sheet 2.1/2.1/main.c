#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[10];
    int b=0;
    size_t x;

    printf(" Enter ten characters\n\n\n");
    for(x=0;x<10;x++)
    {
        scanf("%c",&a[x]);
    }

    for(x=0;x<10;x++)
    {
        if(a[x]=='z' || a[x]=='Z')
           {
            b=++x;
            break;
           }
    }
    if(b==0)
        printf("\n\n there is no (Z)\n\n");
    else
        printf("\n\n The first (Z) character is number : %d\n\n",b);
    return 0;
}
