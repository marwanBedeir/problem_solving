#include <stdio.h>
#include <stdlib.h>
#define size 10

int code(char arr[],int i)
{
    if(i==0)
        return arr[i]*(i+1);
    else
    return arr[i]*(i+1)+code(arr,i-1);
}
int main()
{
    char arr[size];
    int y;
    size_t i;

    printf("Enter your string : ");
    for(i=0;i<size;i++)
    {
    scanf("%c",&arr[i]);
    }
    y=code(arr,size-1);
    printf("\nThe is : %d\n\n",y);
    return 0;
}
