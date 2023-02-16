/*
9.一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如，6的因子为1，2，
3.而6=1十2十3，因此6是“完数”。编程序找出1000之内的所有完数
*/
#include <stdio.h>
int main()
{
    int i, sum, j;
    for (i = 2; i < 1000; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            printf("%d ", i);
    }
    putchar('\n');
    return 0;
}