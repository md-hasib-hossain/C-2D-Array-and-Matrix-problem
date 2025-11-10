#include<stdio.h>
int main()
{
      int row, col;
   scanf("%d %d", &row, &col);
   int arra[row][col];

   for (int i = 0; i < row; i++)
   {
    for (int j = 0; j < col; j++)
    {
       scanf("%d", &arra[i][j]);
    }
   }

   if (row==1)
   {
    printf("This is Row matrix");
   }
   else
   {
    printf("This is not row matrix.");
   }
   
    return 0;
}