#include <stdio.h>
#include <stdlib.h>

int fun(int x)
{
    if(x==0)
        return 0;
    else
        return x+fun(x-1);

}
int main()
{
    int x;
    scanf("%d",&x);
    printf("\nThe sum of first %d natural numbers is : %d\n\n",x,fun(x));
    return 0;
}
