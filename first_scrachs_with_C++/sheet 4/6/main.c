#include <stdio.h>
#include <stdlib.h>

void fun(int x,int y)
{
    if(y==0)
        printf("This number is not a prime number\n\n");
    else if(y==1)
        printf("This number is a prime number\n\n");
    else if (x%y==0)
        printf("This number is not a prime number\n\n");
    else
        fun(x,y-1);
}
int main()
{
    int x,y;
    scanf("%d",&x);
    y=x-1;
    fun(x,y);
    return 0;
}
