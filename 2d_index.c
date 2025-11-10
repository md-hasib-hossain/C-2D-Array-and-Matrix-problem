#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arra[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d%d\n", i, j);
        }
        
    }
    
    return 0;
}
/*
4 3
10 20 30 40
50 80 90 50
60 60 70 60

output
00
01
02
10
11
12
20
21
22
30
31
32
*/