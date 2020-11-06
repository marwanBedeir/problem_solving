#ifndef MULTIMAP_H_INCLUDED
#define MULTIMAP_H_INCLUDED
#include "V_list.h"

typedef struct m{
    int key;
    V_list *values;
    struct m *next;
}mnode;

typedef mnode *Multimap;

void create_M(Multimap *m);
void add_value(Multimap *m,int k,int v);
void Remove_key(Multimap *m,int k);
void modify_value(Multimap *m,int k,int v);
void lookup(Multimap *m,int k,int arr[]);


#endif // MULTIMAP_H_INCLUDED
