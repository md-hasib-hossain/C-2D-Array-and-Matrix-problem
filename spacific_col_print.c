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
   
   int spacific_col;
   scanf("%d", &spacific_col);
   for (int k = 0; k <row ; k++)
   {
   printf("%d ", arra[k][spacific_col]);
   }
   
    return 0;
}