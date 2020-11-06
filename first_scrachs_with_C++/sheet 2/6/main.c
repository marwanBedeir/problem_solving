#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mat[5][5]={'0','1','1','1','1','-','0','1','1','1','-','-','0','1','1','-','-','-','0','1','-','-','-','-','0'};
    size_t x,y;

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
