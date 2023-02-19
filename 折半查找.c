/*
有15个数按由大到小顺序存放在一个数组中，输入一个数，要求用折半查找法找出
该数是数组中第几个元素的值。如果该数不在数组中，则输出“无此数”。
*/
#include <stdio.h>
int main()
{
    int a[15], n, mid, low, high, i;
    for (i = 0; i < 15; i++)
    {
        scanf("%d", a + i);
    }
    printf("请输入要查找的数：");
    scanf("%d", &n);
    mid = 15 / 2;
    if (a[mid] == n)
    {
        printf("%d是数组中第%d个元素\n", n, mid + 1);
    }
    else if (n > a[mid])
    {
        low = 0;
        high = mid;
        for (i = low; i < high; i++)
        {
            if (a[i] == n)
            {
                printf("%d是数组中第%d个元素\n", n, i + 1);
                break;
            }
        }
        if (i == high)
        {
            printf("无此数\n");
        }
    }
    else if (n < a[mid])
    {
        low = mid;
        high = high;
        for (i = low; i < high; i++)
        {
            if (a[i] == n)
            {
                printf("%d是数组中第%d个元素\n", n, i + 1);
                break;
            }
        }
        if (i == high)
        {
            printf("无此数\n");
        }
    }
    return 0;
}