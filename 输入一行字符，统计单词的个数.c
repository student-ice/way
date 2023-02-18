/*
输人一行字符，统计其中有多少个单词，单词之间用空格分隔开。
*/
#include <stdio.h>
int main()
{
    char a[50];
    int i = 0, num = 0, flag = 0;
    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] == ' ')
        {
            flag = 0;
        }
        else
        {
            if (!flag)
            {
                flag = 1;
                num += 1;
            }
        }
        i++;
    }
    printf("有%d个单词\n", num);
    return 0;
}