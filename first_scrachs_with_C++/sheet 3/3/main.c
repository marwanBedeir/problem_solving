#include <stdio.h>
#include <stdlib.h>

int fun(char arr1[],char arr2[])
{
   size_t x,y;
   int flag1=10,flag2=1;

   for(x=0;x<7;x++)
   {
       if(arr1[0]==arr2[x])
       {
           flag1=x;
           break;
       }
   }

   if(flag1==10)
    return 0;

   for(x=flag1+1,y=1;y<3;x++,y++)
   {
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
   char arr1[3],arr2[9];
   size_t i;
   int check;

   printf(" Enter array number 1\n\n");
   for(i=0;i<3;i++)
   {
       scanf("%c",&arr1[i]);
   }

   printf("\n\n Enter array number 2\n\n");
   for(i=0;i<9;i++)
   {
       scanf("%c",&arr1[i]);
   }

   check=fun(arr1,arr2);

   if(check==0)
     printf("\n\n The 1st is not part of the 2nd\n\n");
   else if (check==1)
     printf("\n\n The 1st is part of the 2nd\n\n");
    return 0;
}
