#include <stdio.h>
#include <stdlib.h>

void replace(char arr[])
{
    int i;
    for(i=0;i<100;i++)
    {
        if(arr[i]=='\0'&&arr[i+1]=='\0'&&arr[i+2]=='\0'&&arr[i+3]=='\0')
            break;
        else if(arr[i]=='\0')
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
