#include <stdio.h>
#include <stdlib.h>

int fun(char x[],char y)
{
    int count=0;
    size_t i;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==y)
            count++;
    }
    return count;
}
int main()
{
    char x[100],y;
    int z;
    size_t i;

    scanf("%s ",x);

    scanf("%c",&y);

    z=fun(x,y);
    printf("%d",z);
    return 0;
}
