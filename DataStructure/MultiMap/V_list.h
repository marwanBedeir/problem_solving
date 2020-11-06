#ifndef V_LIST_H_INCLUDED
#define V_LIST_H_INCLUDED

typedef struct nv{
    int value;
    struct nv *next;
}vnode;

typedef vnode *V_list;

void create_V(V_list *VL);
void Insert_value(V_list *VL,int v);
void Remove_values(V_list *VL);
void get_values(V_list *VL,int arr[]);

#endif // V_LIST_H_INCLUDED
