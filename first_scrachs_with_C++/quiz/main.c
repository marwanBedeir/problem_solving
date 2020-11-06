#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}point;

point add(point p1,point p2)
{
    point p;

    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;

    return p;
}
int main()
{
    point p1,p2,pr;

    printf("Enter first point\n");
    scanf("%d %d",&p1.x,&p1.y);

    printf("Enter second point\n");
    scanf("%d %d",&p2.x,&p2.y);

    pr=add(p1,p2);

    printf("\nThe addtion = (%d,%d)",pr.x,pr.y);
    return 0;
}
