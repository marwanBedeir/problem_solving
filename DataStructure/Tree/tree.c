#include <stdlib.h>
#include "tree.h"


void create_tree(tree *t){
       *t = NULL;
}

void insert(tree *t, tree_entry item){
    tree_node *p =(tree_node*)malloc(sizeof(tree_node));
    p->info = item;
    p->left = NULL;
    p->right = NULL;
    if (!(*t))
        *t= p;
    else{ tree_node *pre,*cur;
        cur = *t;
    while(cur){
        pre = cur;
        if(item < cur->info)
        cur = cur->left;
        else  cur = cur->right;
        }
    if(item <pre->info)
        pre->left = p;
    else
        pre->right = p;
        }
    }

int inorder_traversal(tree t,int key){
        int min1,min2,min3,v1,v2;
       if(t){
            v1=inorder_traversal(t->left,key);
            min2=((t->info)-key)*((t->info)-key);
            v2=inorder_traversal(t->right,key);

            min1=(key-v1)*(key-v1);
            min3=(key-v2)*(key-v2);
            if(min1>min2)
            {
                if(min2>min3)
                {
                    return v2;
                }
                else
                {
                    return t->info;
                }
            }
            else
            {
                if(min1>min3)
                {
                    return v2;
                }
                else
                {
                    return v1;
                }
            }
            }
       else
        return 10000;
}
