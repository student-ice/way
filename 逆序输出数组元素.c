/*
对10个数组元素依次赋值为0,1,2,3，4,5,6,7,8,9,按逆序输出。
*/
#include <stdio.h>
int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, i;

    for (i = 9; i >= 0; i--)
    {
        printf("%d ", *(a + i));
    }
    putchar('\n');
    return 0;
}