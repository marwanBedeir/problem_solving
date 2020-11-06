#include <stdio.h>
#include <stdlib.h>

int fun(int arr[][4])
{
    int flag = 1;
    size_t x,y,z;
    for(x=0,y=0;x<4;x++,y++)
    {
        for(z=0;z<4;z++)
        {
            if(arr[x][z]!=arr[z][y])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            break;
    }
    return flag;
}
int main()
{
    int arr[4][4],r;
    size_t x,y;

    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            scanf("%d",&arr[x][y]);
        }
    }
    r=fun(arr);
    printf("%d",r);
    return 0;
}
