/*
有一个3×4的矩阵，要求编程序求出其中值最大的那个元素的值，
以及其所在的行号和列号
*/
#include <stdio.h>
int main()
{
    int a[3][4], i, j, max, row, cum;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                cum = j;
            }
        }
    }
    printf("最大的元素为%d，行号为%d，列号为%d\n", max, row, cum);
    return 0;
}