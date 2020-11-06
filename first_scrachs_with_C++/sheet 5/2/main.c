#include <stdio.h>
#include <stdlib.h>

void fun(int arr[],int size,int pass)
{
    int count=0,i,hold;
    for (i=0;i<size-pass;i++)
    {
        if(arr[i]>arr[i+1])
        {
            hold=arr[i];
            arr[i]=arr[i+1];
            arr[i+1] =hold;
            count++;
        }
    }
    if(count>0)
        fun(arr,size,pass+1);
}
int main()
{
    int size=10,arr[size];
    size_t i;
    printf("Enter your array ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,size,1);
    for(i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    return 0;
}
