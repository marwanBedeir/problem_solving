#include <stdio.h>
#include <stdlib.h>

int fun(char arr1[],char arr2[])
{
   size_t x,y;
   int flag1=-1,flag2=1;

   for(x=0;x<30;x++)
   {
       if(arr1[0]==arr2[x])
       {
           flag1=x;
           break;
       }
       else if(arr2[x]=='\0')
        break;
   }

   if(flag1==-1)
    return 0;

   for(x=flag1+1,y=1;y<30;x++,y++)
   {
     if(arr1[y]=='\0' || arr2[x]=='\0')
     break;

     if(arr1[y]!= arr2[x])
     {
         flag2=0;
         break;
     }
   }
   return flag2;
}

int main()
{
   char arr1[30],arr2[30];
   int check;


    scanf("%s",arr1);

    scanf("%s",arr2);

    check=fun(arr1,arr2);


    printf("%d",check);

    return 0;
}
