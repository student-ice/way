/*
求Fibonacci斐波那契)数列的前40个效。这个数列有如下特点：第1.2
个数为1,1。从第3个数开始，该数是其前面两个数之和。即该数列为1,1,2.3 5.
*/
#include <stdio.h>
int main()
{
    int a = 1, b = 1, i, sum;
    printf("%d %d ", a, b);
    for (i = 0; i < 40; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }
    putchar('\n');
    return 0;
}