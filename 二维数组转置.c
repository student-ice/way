#include <stdio.h>
int main()
{
    int i, j;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        putchar('\n');
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("转置后：\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        putchar('\n');
    }
    return 0;
}