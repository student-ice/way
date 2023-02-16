/*
有一个分数序列
 2/1 , 3/2 , 5/3 , 8/5 , 13/8 , 21/13 ...
求出这个数列的前20项之和。
*/

#include <stdio.h>
int main()
{
    int i;
    double sum = 0;
    double top = 2;    // 分子
    double bottom = 1; // 分母
    double t;
    for (i = 0; i < 20; i++)
    {
        sum += top / bottom;
        t = top;
        top = bottom + top;
        bottom = t;
    }
    printf("数列前20项和为: %f\n", sum);
    return 0;
}