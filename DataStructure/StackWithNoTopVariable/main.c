#include <stdio.h>
#include <stdlib.h>
#include "stackn.h"
#include "stackn.c"
int main()
{
    int item=25,n;
    Stack s;
    creat(&s);
    push(&s,item);
    pop(&s,&n);
    printf("\n%d \n",n);
    return 0;
}
