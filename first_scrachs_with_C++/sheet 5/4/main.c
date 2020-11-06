#include <stdio.h>
#include <stdlib.h>
void mean(int arr[],int size)
{
    float avr,sum=0;
    int i;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    avr=sum/size;
    printf("\n\nThe mean = %.2f",avr);
}
void median(int arr[],int size)
{
    printf("\n\nThe median = %d",arr[(size-1)/2]);
}
void mode(int arr[],int size)
{
    int occur,x,y,a=0,z;
     for(x=0;x<size;x++)
    {
        occur=0;
        for(y=0;y<size;y++)
        {
            if(x!=y)
            {
              if(arr[x]==arr[y])
              {
               occur++;
              }
            }
        }
        if(occur>a)
            {
            a=occur;
            z=x;
            }
    }
    if(a!=0)
        printf("\n\nThe mode = %d",arr[z]);
    else
        printf("\n\nNo number repeated");
}
int main()
{
    int size=10,arr[size],i;
    void (*f[3])(int,int)={mean,mode,median};
    int choice;
    printf("Enter your array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n\nEnter 1 to calculate the mean\nEnter 2 to calculate the mode\nEnter 3 to calculate the median\nOr enter any number to end the program\n ");
    scanf("%d",&choice);
    while(choice>=1&&choice<=3)
    {
        (*f[choice-1])(arr,size);
        printf("\n\nEnter 1 to calculate the mean\nEnter 2 to calculate the mode\nEnter 3 to calculate the median\nOr enter any number to end the program\n ");
        scanf("%d",&choice);
    }
    printf("\n\n\n        Good bye \n\n\n");
    return 0;
}
