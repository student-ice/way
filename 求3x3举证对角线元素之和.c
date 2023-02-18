#include <stdio.h>
int main()
{
    int a[3][3], i, j, sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum += a[i][i];
    }
    for (i = 3; i < 3; i++)
    {
        sum += a[i][i];
    }
    for (i = 0; i < 3; i++)
    {
        sum += a[i][2 - i];
    }
    printf("%d\n", sum);
    return 0;
}