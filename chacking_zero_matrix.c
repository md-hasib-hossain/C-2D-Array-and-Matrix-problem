
#include <stdio.h>
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

    int total_order = row*col;
    int zero = 0;


    for (int i = 0; i <row; i++)
    {
      for (int j = 0; j < col; j++)
      {
       if (arra[i][j]== 0)
       {
        zero++;
       }   
      }      
    }

    if (total_order == zero)
    {
        printf("this Matrix is Zero\n");
    }
    else
    {
        printf("This matrix is not Zero");
    }
    
    

    return 0;
}