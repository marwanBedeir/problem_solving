#include <stdio.h>

int fun(char arr[],int i) /**< char arr[] = char* p */
{
    if(arr[i]=='\0') /**< arr[i] = *p */
        return 0;
    else
        return 1+fun(arr,i+1);
}
int main()
{
    char arr[100],y;

    scanf("%s",&arr[0]);
    y=fun(arr,0);
    printf("%d",y);

    return 0;
}
