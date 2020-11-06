#include <stdio.h>
#include <stdlib.h>
#define size 10

void fun(char x[],int i)
{
    if(i==0)
        printf("%c\n\n",x[i]);
    else
    {
        printf("%c",x[i]);
        fun(x,i-1);
    }
}
int main()
{
    char x[size];
    size_t i;

    printf("Enter your string : ");
    for(i=0;i<size;i++)
    {
        scanf("%c",&x[i]);
    }
    printf("\n");
    fun(x,size);
    return 0;
}
