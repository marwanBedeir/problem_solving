#include <stdio.h>
#include <stdlib.h>
#include "Multimap.h"

int main()
{
    int e = 1,a;
    Multimap m;
    create_M(&m);

    while(e)
    {
        system("cls");
        printf("Enter 1 to add value with key\n");
        printf("Enter 2 to remove key\n");
        printf("Enter 3 to modify key\n");
        printf("Enter 4 to lookup on key\n");
        printf("Enter 5 to exit\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1 :
            {
                    int k,v;
                    system("cls");
                    printf("Enter the key : ");
                    scanf("%d",&k);
                    system("cls");
                    printf("Enter the value : ");
                    scanf("%d",&v);
                    add_value(&m,k,v);
                    break;
            }
            case 2 :
                {
                    int k;
                    system("cls");
                    printf("Enter the key : ");
                    scanf("%d",&k);
                    Remove_key(&m,k);
                    break;
                }
            case 3 :
                {
                    int k,v;
                    system("cls");
                    printf("Enter the key : ");
                    scanf("%d",&k);
                    system("cls");
                    printf("Enter the new value : ");
                    scanf("%d",&v);
                    modify_value(&m,k,v);
                    break;
                }
            case 4 :
                {
                    int k,arr[30];
                    arr[0]=1999;
                    system("cls");
                    printf("Enter the key : ");
                    scanf("%d",&k);
                    lookup(&m,k,arr);
                    if(arr[0] != 1999)
                        {
                            printf("%d",arr[0]);
                        }
                    else
                    {
                         printf("NOT FOUND\n");
                    }


                    printf("Enter any thing to continue : ");
                    char c;
                    scanf("%c",&c);
                    scanf("%c",&c);
                    break;
                }
            case 5 :
                {
                    e = 0;
                }
        }
    }
    return 0;
}
