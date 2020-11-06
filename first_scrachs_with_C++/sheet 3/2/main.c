#include <stdio.h>
#include <stdlib.h>
#define s 6

void check(int arr[])
{
    size_t i;
    int diff,flag=1;

    diff=arr[1]-arr[0];
    for(i=0;i<s-1;i++)
    {
        if(diff!=arr[i+1]-arr[i])
        {
            flag=0;
            break;
        }
    }

    if (flag==1&&diff>0)
        printf("\n This array is ascending ordered.\n\n");
        else
        printf("\n This array is not ascending ordered.\n\n");
}

int main()
{
    int arr[s];
    size_t i;

    printf(" Enter your array \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

    check(arr);

    return 0;
}
