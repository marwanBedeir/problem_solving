#include <stdio.h>
#include <stdlib.h>

int fun(int arr[],int size,int y)
{
    if(size==0&&y!=arr[size])
        return -1;
    else
    {
    if(y==arr[size])
        return size;
    else
        return fun(arr,size-1,y);
    }
}
int main()
{
    int size=10,arr[size],x,y;
    size_t i;
    printf("Enter your array \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the number that you want to search about it : ");
    scanf("%d",&y);

    x=fun(arr,size-1,y);

    if(x==-1)
        printf("\nnumber not found\n\n");
    else
        printf("\n\nthe index of element is : %d\n\n",x);

    return 0;
}
