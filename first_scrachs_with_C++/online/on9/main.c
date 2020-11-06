#include <stdio.h>
#include <stdlib.h>
int check(int arr[][5])
{
    int x,y,count=0;
    for(x=0;x<4;x++)
    {
        for(y=0;y<5;y++)
        {
          if(arr[x][y]==0)
                count++;
        }
    }
    if(count>10)
        return 1;
    else
        return 0;
}
int main()
{
    int arr[4][5],ch;
    size_t x,y;
    for(x=0;x<4;x++)
    {
        for(y=0;y<5;y++)
        {
           scanf("%d",&arr[x][y]);
        }
    }
    ch=check(arr);

    printf("%d",ch);

    return 0;
}
