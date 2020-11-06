#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mat[5][5];
    size_t x,y;

     for(x=0;x<5;x++)
    {
        for(y=0;y<5;y++)
        {
            if(y>x)
                mat[x][y]='1';
            else if (x>y)
                mat [x][y]='-';
            else
                mat[x][y]='0';
        }
    }

    for(x=0;x<5;x++)
    {
        for(y=0;y<5;y++)
        {
            printf("%c  ",mat[x][y]);
        }
        printf("\n");
    }
    return 0;
}
