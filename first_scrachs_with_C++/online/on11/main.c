#include <stdio.h>

void fun(char arr1[],char arr2[])
{
    size_t x,y;

    for(x=0;arr1[x]!='\0';x++);

    for(y=0;arr2[y]!='\0';x++,y++)
    {
        arr1[x] = arr2[y];
    }

    arr1[x] = '\0';
}
int main()
{
    char arr1[100],arr2[100];

    scanf("%s",arr1);
    scanf("%s",arr2);

    fun(arr1,arr2);
    printf("%s",arr1);

    return 0;
}
