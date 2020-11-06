#include <stdio.h>
#include <stdlib.h>
#define stu 6
float avr(int arr[])
{
    int x;
    float sum=0,z;
    for (x=0;x<5;x++)
    {
        sum=sum+arr[x];
    }
    z=sum/5;
    return z;
}

int main()
{
    int arr[5],z;
    size_t x;
    float a;
    for(z=1;z<=stu;z++)
    {
        printf(" Enter the grades of student number %d\n",z);
        for(x=0;x<5;x++)
        {
            scanf("%d",&arr[x]);
        }
        a=avr(arr);
        printf("\n The average grade for student number %d is : %.2f\n\n",z,a);
    }
    return 0;
}
