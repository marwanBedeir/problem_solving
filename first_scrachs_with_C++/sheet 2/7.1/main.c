#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z=1,row,col;
    int pac[100][100];

    printf("Enter the Pascal triangle size : ");
    scanf("%d",&x);
    y=x;

    for(row=0; row<x; row++)
    {
        for(col=0; col<y; col++)
        {
            pac[row][col]=0;
        }
    }


    for(row=0; row<x; row++)
    {
        for(col=0; col<z; col++)
        {
            if(col==0)
                pac[row][col]=1;
            else
                pac[row][col]=pac[row-1][col-1]+pac[row-1][col];
        }
        z++;
    }

    for(row=0; row<x; row++)
    {
        for(col=0; col<z; col++)
        {
            if (pac[row][col]!=0)
                printf("%d  ",pac[row] [col]);
        }
        printf("\n");
    }

    return 0;
}
