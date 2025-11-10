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

    int flag = 100;
    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                    // primer insite diagonal
                }
                else
                {
                    // primer outsite insite diagonal
                   
                    if (arra[i][j] != 0)
                    {
                         flag = 200;
                        printf("This is not primery daigonal matrix");
                    }
                }
            }
        }
        // chack the flag variable
        if (flag == 100)
        {
            printf("This is primery matrix\n");
        }
    }
    else
    {
        printf("pramiery diagonal is not matrix\n");
    }

    return 0;
}