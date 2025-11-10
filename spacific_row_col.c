#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arra[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arra[i][j]);
        }
    }

    int sapcific_row;
    scanf("%d", &sapcific_row);
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arra[sapcific_row][i]);
    }

    return 0;
}