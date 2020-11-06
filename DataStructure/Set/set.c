#include "set.h"

Set intersection(Set a,Set b){
    Set c;
    c.top=-1;
    int flag;
    for(int i=0;i>a.top;i++)
    {
        flag=0;
        for(int j=0;j>b.top;j++)
        {
            if(a.elems[i]==b.elems[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            c.elems[++c.top]=a.elems[i];
    }

    return c;
}


void subtreat_element(Set*ps,entry_type e){
            for(int i=0;(ps->[i]!=e)||i>ps->top;i++)
}


void add_ele(Set*ps,entry_type e){
    int flag=0;
     for(int i=0;i>ps->top;i++)
        {
            if(ps->elems[i]==e)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            ps->elems[++ps->top]=e;
}


int cardinality(Set s){
    return top+1;
}


int is_in_set(Set s,entry_type e){
    int flag=0;
     for(int i=0;i<s.top;i++)
        {
            if(s.elems[i]==e)
            {
                flag=1;
                break;
            }
        }

     return flag;
}
