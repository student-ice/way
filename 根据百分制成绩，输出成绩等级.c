/*
给出一百分制成绩，要求输出成绩等级'A'、B'、'C'、'D'、E"。
90分以上为"A',80～89分为B'.70～79分为'C",60～69分为"D",60分以下为E。
*/
#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个百分制成绩：");
    scanf("%d", &a);
    if (a >= 90)
    {
        printf("%d对应的成绩等级为：A\n", a);
    }
    else if (a >= 80 && a <= 90)
    {
        printf("%d对应的成绩等级为：B\n", a);
    }
    else if (a >= 70 && a <= 79)
    {
        printf("%d对应的成绩等级为：C\n", a);
    }
    else if (a >= 60 && a <= 69)
    {
        printf("%d对应的成绩等级为：D\n", a);
    }
    else
    {
        printf("%d对应的成绩等级为：E\n", a);
    }
    return 0;
}