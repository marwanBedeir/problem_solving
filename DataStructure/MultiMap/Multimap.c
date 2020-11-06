#include "Multimap.h"
#include "V_list.h"
#include <stdlib.h>

void create_M(Multimap *m)
{
    *m = NULL;
}

void add_value(Multimap *m,int k,int v)
{
    mnode *q = (*m),*p = (mnode*)malloc(sizeof(mnode));
    V_list V;
    create_V(&V);
    Insert_value(&V,v);

    p->key = k;
    p->values = &V;
    p->next = NULL;

    if(q != NULL)
    {
        int flag=0;
        while(q->next != NULL)
        {
            if(q->key == k)
            {
                flag=1;
                break;
            }
            q = q->next;
        }
        if(flag)
        {
            Insert_value(q->values,v);
        }
        else
            q->next = p;

    }
    else
       (*m) = p;
}

void Remove_key(Multimap *m,int k)
{
    mnode *q = (*m);
    if(q != NULL)
    {
        int flag=0;
        while(q != NULL)
        {
            if(q->key == k)
            {
                flag=1;
                break;
            }
            q = q->next;
        }
        if(flag)
        {
            Remove_values(q->values);
        }
    }
}

void modify_value(Multimap *m,int k,int v)
{
    mnode *q = (*m);
    if(q != NULL)
    {
        int flag=0;
        while(q->next != NULL)
        {
            if(q->key == k)
            {
                flag=1;
                break;
            }
            q = q->next;
        }
        if(flag)
        {
            Remove_values(q->values);
            V_list V;
            create_V(&V);
            Insert_value(&V,v);
            q->values = &V;
        }
    }
}


void lookup(Multimap *m,int k,int arr[])
{
    mnode *q = (*m);
    if(q != NULL)
    {
        int flag = 0;
        while(q != NULL)
        {
            if(q->key == k)
            {
                flag = 1;
                break;
            }
            q = q->next;
        }
        if(flag)
        {
            if(q->values != NULL)
            {
                get_values(q->values,arr);
            }
        }
    }
}
