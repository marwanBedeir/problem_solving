#include <stdio.h>
#include <stdlib.h>
#define size 10

int fun(char x[],char y)
{
    int count=0;
    size_t i;
    for(i=0;i<size;i++)
    {
        if(x[i]==y)
            count++;
    }
    return count;
}
int main()
{
    char x[size],y;
    int z;
    size_t i;
    printf("Enter your string : ");
    for(i=0;i<size;i++)
    {
        scanf("%c",&x[i]);
    }
    printf("\nEnter the letter : ");
    scanf("%c",&y);

    z=fun(x,y);
    printf("\n\nThe number of occurrences of the given character in the given string is : %d\n\n",z);
    return 0;
}
