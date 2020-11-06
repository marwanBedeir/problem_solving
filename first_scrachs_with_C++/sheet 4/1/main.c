#include <stdio.h>
#include <stdlib.h>

void fun(float r,float *p1,float *p2)
{
    *p1=3.14*r*r;
    *p2=2*3.14*r;
}
int main()
{
    float r,*p1,*p2,a,c;
    printf("Enter the radius of the circle please : ");
    scanf("%f",&r);
    p1=&a;
    p2=&c;
    fun(r,p1,p2);

    printf("\nThe area of the circle is %.2f\n\nThe circumference of the circle is %.2f\n\n\n",a,c);
    return 0;
}
