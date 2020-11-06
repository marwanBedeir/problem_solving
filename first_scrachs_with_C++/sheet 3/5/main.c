#include <stdio.h>
#include <stdlib.h>
int check(int arr[][5])
{
    int x,y,count=0;
    for(x=0;x<6;x++)
    {
        for(y=0;y<5;y++)
        {
          if(arr[x][y]==0)
                count++;
        }
    }
    if(count>15)
        return 1;
    else
        return 0;
}
int main()
{
    int arr[6][5],ch;
    size_t x,y;
    printf(" Enter your matrix\n");
    for(x=0;x<6;x++)
    {
        for(y=0;y<5;y++)
        {
           printf("[%d][%d]= ",x,y);
           scanf("%d",&arr[x][y]);
        }
    }
    ch=check(arr);
    if(ch==1)
        printf("\n This matrix is sparse");
    else
        printf("\n This matrix is not sparse");
    return 0;
}
