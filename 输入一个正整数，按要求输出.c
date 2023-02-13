/*
给一个正整数，要求：
①求出它是几位数；
②分别输出每一位数字；
③按逆序输出各位数字，例如原数为321，应输出123。
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, count = 0, i;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &a);
    b = a;
    while (b != 0)
    {
        if (b == 0)
            break;
        b /= 10;
        count++;
    }
    printf("这是%d位数\n", count);
    for (i = 0; i < count; i++)
    {
        if (i == 0)
            printf("%d ", a / (int)(pow(10, (count - i - 1))));
        if (i > 0)
            printf("%d ", a / (int)(pow(10, (count - i - 1))) % 10);
    }
    putchar('\n');
    for (i = 0; i < count; i++)
    {
        if (i == 0)
        {
            printf("%d", a % 10);
        }

        if (i > 0 && i < count - 1)
        {
            printf("%d", (a / (int)(pow(10, i))) % 10);
        }
        if (i == count - 1)
        {
            printf("%d\ns", a / (int)(pow(10, count - 1)));
        }
    }
    return 0;
}