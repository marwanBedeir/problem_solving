#include <stdio.h>
#include <stdlib.h>
#define size 4

void reverse(int arr1[][size])
{
    int arr2[size][size];
    size_t x,y,row,col;

    for(x=0,row=0;x<size&&row<size;x++,row++)
    {
        for(y=0,col=size-1;y<size&&col>=0;y++,col--)
        {
            arr2[row][col]=arr1[x][y];
        }
    }

    printf("\n\n The reverse is \n\n");

    for(x=0;x<size;x++)
    {
        for(y=0;y<size;y++)
        {
            printf(" %d",arr2[x][y]);
        }
        printf("\n");
    }

}

int main()
{
    int arr1[size][size];
    size_t x,y;

    printf(" Enter your Matrix\n\n");
    for(x=0;x<size;x++)
    {
        for(y=0;y<size;y++)
        {
            printf(" Matrix [%d][%d] : ",x,y);
            scanf("%d",&arr1[x][y]);
        }
    }
     printf("\n\n your matrix is \n\n");

     for(x=0;x<size;x++)
    {
        for(y=0;y<size;y++)
        {
            printf(" %d",arr1[x][y]);
        }
        printf("\n");
    }

     reverse(arr1);
    return 0;
}
