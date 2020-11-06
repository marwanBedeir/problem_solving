#include <stdio.h>
#include <stdlib.h>

void avr(float arr[])
{
    int x;
    float sum=0,z;
    for (x=0;x<5;x++)
    {
        sum=sum+arr[x];
    }
    z=sum/5;
    printf("%.1f ",z);
}

int main()
{
    float arr[4][5],arr1[5];
    size_t x,y;
    for(x=0;x<4;x++)
    {
        for(y=0;y<5;y++)
        {
            scanf("%f",&arr[x][y]);
        }
    }
    for(x=0;x<4;x++)
    {
        for(y=0;y<5;y++)
        {
            arr1[y]=arr[x][y];
        }
        avr(arr1);
    }
    return 0;
}
