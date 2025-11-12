#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arra[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arra[i][j]);
        }
    }

    int primary = 0, secondary = 0;

    for (int i = 0; i < n; i++)
    {
        primary += arra[i][i];
        secondary += arra[i][n - 1 - i];
    }

    int diff = primary - secondary;
    if (diff < 0)
    {
        diff = -diff;
    }
    printf("%d\n", diff);

    return 0;
}

/*
Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the absolute difference between the summation of the matrix main diagonals.

Example
InputCopy
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6
OutputCopy
22
*/