#include <stdio.h>
#include <stdlib.h>

int fun(int arr[],int size)
{
    int flag,i;
    for(i=1;i<size;i++)
    {
        if(arr[i]>arr[i-1])
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
         return 1;
     else
     {
         for(i=1;i<size;i++)
        {
            if(arr[i]<arr[i-1])
                flag=1;
            else
            {printf("Enter your array \n");
                flag=0;
                break;
            }
        }
         return flag;
     }

}
int main()
{
    int size=10,arr[size],x;
    size_t i;
    printf("Enter your array \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    x=fun(arr,size);
    if(x==1)
        printf("This function is sorted");
    else
        printf("This function is not sorted");
    return 0;
}
