/*
请编程序将"China"译成密码，密码规律是：用原来的字母后面第4个字母代替原来
的字母。例如，字母“A"后面第4个字母是"E”，用"E"代替"A"。因此，“China"应译为
“Glmre"。请编一程序，用赋初值的方法使cl,c2,c3,c4,c5这5个变量的值分别为"C"，
“h","i"，n","a",经过运算,使cl,c2,c3,c4,c5分别变为‘G",1"，m"，"r"，e"。分别用putchar
函数和printf函数输出这5个字符。
*/
#include <stdio.h>
int main()
{
    char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
    c1 += 4;
    c2 += 4;
    c3 += 4;
    c4 += 4;
    c5 += 4;
    putchar(c1);
    putchar(c2);
    printf("%c%c%c\n", c3, c4, c5);
    return 0;
}