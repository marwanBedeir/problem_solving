#include <stdio.h>
#include <stdlib.h>

int max_row(int mat[][3],size_t x,size_t y)
{
  int sum,max=-999999,row;
  for (x=0;x<3;x++)
        {
            sum=0;
            for (y=0;y<3;y++)
            {
              sum=sum+mat[x][y];
            }
            if(sum>max)
            {
              max=sum;
              row=x;
            }
        }
        return row;
}

int main()
{
   int mat[3][3],row;
   size_t x,y;

   printf("Enter the numbers of (3*3) matrix\n");
   for (x=0;x<3;x++)
        {
            for (y=0;y<3;y++)
            {
            printf("matrix[%d][%d] = ",x,y);
            scanf("%d",&mat[x][y]);
            }
        }

   row=max_row(mat,x,y);

        printf("\n\nThe row with maximum total is row number : %d\n\n",row);
    return 0;
}
