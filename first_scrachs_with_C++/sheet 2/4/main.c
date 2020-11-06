#include <stdio.h>
#include <stdlib.h>

int main()
{
   int mat[3][4],s,p1=99,p2;
   size_t x,y;

   printf("Enter the numbers of (3*4) matrix\n");
   for (x=0;x<3;x++)
        {
            for (y=0;y<4;y++)
            {
            printf("matrix[%d][%d] = ",x,y);
            scanf("%d",&mat[x][y]);
            }
        }

   printf("\nChoose a number ");
   scanf("%d",&s);

   for (x=0;x<3;x++)
        {
            for (y=0;y<4;y++)
            {
              if(s==mat[x][y])
              {
                  p1=x;
                  p2=y;
                  break;
              }
            }
        }

   if (p1==99)
    printf("\n\nNumber not found\n\n");
   else
    printf("\n\nThe position of this number is [%d][%d]\n\n",p1,p2);
    return 0;
}
