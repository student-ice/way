/*
要求按照考试成绩的等级输出百分制分数段，A等为85分以上，B等为
70~84分，C等为60～69分，D等为60分以下
成绩的等级由键盘输入
*/
#include <stdio.h>
int main()
{
    char score;
    printf("请输入考试等级：");
    scanf("%c", &score);
    switch (score)
    {
    case 'A':
        printf("%c等为85分以上\n", score);
        break;
    case 'B':
        printf("%c等为70~84分\n", score);
        break;
    case 'C':
        printf("%c等为60~69分\n", score);
        break;
    case 'D':
        printf("%c等为60分以下\n", score);
        break;
    }
    return 0;
}