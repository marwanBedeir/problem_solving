#include <stdio.h>
#include <stdlib.h>
int fun(int n);
int main()
{
    int num,i;
    scanf("%d",&num);
    i=fun(num);
    printf("%d",i);
    return 0;
}
int fun(int num)
{
    static int i=2;
    if(num==1)
    {
        return 1;
    }
    if(i==num)
    {
        return 1;
    }
    else
    {
        if(num%i==0)
        {
            return 0;
        }
        i++;
        fun(num);
    }
}
