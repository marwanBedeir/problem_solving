#include <stdlib.h>
#include "V_list.h"

void create_V(V_list *VL)
{
    (*VL) = NULL;
}

void Insert_value(V_list *VL,int v)
{
    vnode *p,*q = (*VL);
    p=(vnode *)malloc(sizeof(vnode));

    p->value = v;
    p->next = NULL;

    if(q != NULL)
    {
        while(q->next != NULL);
        {
            q = q->next;
        }
        q->next = p;
    }
    else
        (*VL) = p;
}

void Remove_values(V_list *VL)
{
    vnode *q = (*VL);
    while(q != NULL)
    {
    while(q->next != NULL)
    {
        q = q->next;
    }
    free(q);
    q = (*VL);
    }
}

void get_values(V_list *VL,int arr[])
{
    vnode *p = (*VL);
    int i = 0;
    while(p != NULL)
    {
        arr[i] = p->value;
        p = p->next;
        i++;
    }
}
