/*
求Sn=a十aa+aaa+…+aaa（n个a）之值，其中α是一个数字，n表示α的位数，n由健盘输人。例如：
2+22十222十2222十22222（此时 n=5）
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, next = 2, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        sum += next;
        next = next * 10 + 2;
    }
    printf("%d\n", sum);
    return 0;
}