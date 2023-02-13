/*
输人一行字符，分别统计出其中英文字母、空格、数字其他宇符的个数。
*/
#include <stdio.h>
int main()
{
    char a;
    int english = 0, space = 0, num = 0, other = 0;
    while (a = getchar())
    {
        if (a == '\n')
            break;
        if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
        {
            english++;
        }
        else if (a == ' ')
        {
            space++;
        }
        else if (a >= '0' && a <= '9')
        {
            num++;
        }
        else
        {
            other++;
        }
    }
    printf("英文字母：%d个\n空格：%d个\n数字：%d个\n其他字符：%d个\n", english, space, num, other);
    return 0;
}