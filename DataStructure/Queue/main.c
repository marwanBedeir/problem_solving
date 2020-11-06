#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
    int s,g,i=0,m,Marge;
    Queue Sq,Gq,Mq;

    create_queue(&Sq);
    create_queue(&Gq);
    create_queue(&Mq);

    printf("Add %d Section code\n\n",Max);
    while(!q_full(&Sq))
    {
        printf("Section Num%d : ",i+1);
        scanf("%d",&s);
        enqueue(&Sq,s);
        i++;
    }

    i=0;
    printf("\nAdd %d Group code\n\n",Max);

    while(!q_full(&Gq))
    {
        printf("Group Num%d : ",i+1);
        scanf("%d",&g);
        enqueue(&Gq,g);
        i++;
    }


    for(i=0;i<Max;i++)
    {
        dequeue(&Sq,&s);
        dequeue(&Gq,&g);
        Marge=(s*10)+g;
        enqueue(&Mq,Marge);
    }
     printf("\nThe New queue is: ");
     for(i=0;i<Max;i++)
    {
        dequeue(&Mq,&m);
        printf("%d ",m);

    }
    return 0;
}
