#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    char arr[Max],arr2[Max],e,L;
    Stack s;
    int i,ii;

    creat_stack(&s);

    printf("Enter your  mathematical expression : ");
    scanf("%s",arr);

    for (i=0,ii=0;arr[i]!='\0';i++) //This loop to divide the  parentheses from the expression
    {
        if(arr[i]=='('||arr[i]==')')
        {
            arr2[ii]=arr[i];
            ii++;
        }

        if(arr[i+1]=='\0') //This line to end the string correctly
            arr2[ii]='\0';

    }


    for (i=0;arr2[i]!='\0';i++)
    {
        e=arr2[i];
        if(e==')'&&Is_empty(s))
        {
            push(&s,e);
            break;
        }
        else if(!Is_empty(s))
        {
            L=pop(&s);
            if(L==e)
            {
                push(&s,L);
                 push(&s,e);
            }
        }
        else
            push(&s,e);
    }
    if(Is_empty(s))
        printf("\nCorrect parentheses\n");
    else
        printf("\nInCorrect parentheses\n");

    return 0;
}
