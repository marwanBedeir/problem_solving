#include <stdio.h>
#include <stdlib.h>

int fun(char* p)
{
    if(*p=='\0')
        return 0;
    else if(*p!=' ')
         fun(p+1);
    else
        return 1+fun(p+1);
}
int main()
{
    char arr[100];
    char *p;
    int y;
    gets(&p);
    y=fun(&p);
    printf("%d",y);
    return 0;
}
