#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
int main()
{
    int i,x,y,k;
    tree *t;
    create_tree(&t);
    printf("Enter 5 element to insert them into the tree\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x);
        insert(&t,x);
    }
    printf("Enter the number that you search for the closest value to it in the tree\n");
    scanf("%d",&k);
    y=inorder_traversal(t,k);
    printf("The closest value is : %d",y);
    return 0;
}
