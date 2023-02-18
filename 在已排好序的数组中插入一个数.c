#include <stdio.h>
int main()
{
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, n, t;
    scanf("%d", &n);
    // 找到插入位置
    for (i = 0; i < 10; i++)
    {
        if (n < a[i])
        {
            t = i;
            break;
        }
    }
    if (i == 10)
        t = 10;
    // 腾出空位置
    for (i = 9; i >= t; i--)
    {
        a[i + 1] = a[i];
    }
    //插入数据
    a[t] = n;
    for (i = 0; i < 11; i++)
    {
        printf("%d ", *(a + i));
    }
    putchar('\n');
    return 0;
}