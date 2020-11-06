#include <stdio.h>
#include <stdlib.h>

void replace(char arr[])
{
    int i;
    for(i=0;i<100;i++)
    {
        if(arr[i]=='\0')
            break;
        else if(arr[i]==' ')
                arr[i]='-';
    }
}
int main()
{
    char arr[100];
    printf("Enter your string : ");
    gets(arr);
    replace(arr);
    printf("\n%s\n",arr);
    return 0;
}
