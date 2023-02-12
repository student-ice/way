/*
编程序，用getchar函数读入两个字符给cl和c2，然后分别用putchar函数和printf函数输出这两个字符
*/
#include <stdio.h>
int main()
{
    char c1, c2;
    c1 = getchar();
    c2 = getchar();
    putchar(c1);
    printf("\n%c\n", c2);
    return 0;
}