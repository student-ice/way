#include <stdio.h>
int main()
{
    int a[3][3], i, j, max, cum, num = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        max = a[i][0];
        cum = 0;
        for (j = 1; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                cum = j;
            }
        }
        for (j = 0; j < 3; j++)
        {
            if (a[j][cum] < max)
            {
                break;
            }
        }
        if (j == 3)
        {
            printf("%d是鞍点\n", max);
        }
        else
        {
            num++;
        }
    }
    if (num == 3)
    {
        printf("没有鞍点\n");
    }
    return 0;
}