/*
输出以下4×5的矩阵。
1  2  3  4  5
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20
*/
#include <stdio.h>
int main()
{
    int i, j, a = 1;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", a);
            a++;
        }
        putchar('\n');
    }
    putchar('\n');
    return 0;
}