#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef int tree_entry;
typedef struct node_type{
        tree_entry info;
        struct node_type *right;
        struct node_type *left;
        } tree_node;

typedef tree_node *tree;

void creat_tree(tree*t);
void Insert(tree *t, tree_entry item);
int inorder_traversal(tree t,int key);
#endif // TREE_H_INCLUDED
