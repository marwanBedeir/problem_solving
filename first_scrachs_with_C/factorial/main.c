#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,p=1;

do
{
    printf("enter your number \n");
    scanf("%d",&x);
}while(x<0);
do
{
    p=p*x;
    x=x-1;
}while(x!=1);

printf("  %d",p);
    return 0;
}
