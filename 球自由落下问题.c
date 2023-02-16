/*
一个球从100m高度自由落下，每次落地后反弹回原高度的一半，再落下，再反弹。
求它在第10次落地时共经过多少米，第10次反弹多高，
*/
#include <stdio.h>
int main()
{
    int i;
    double high = 100, km = 0;
    for (i = 0; i < 10; i++)
    {
        km += high;
        high /= 2;
        km += high;
    }
    printf("第十次落地共经过%.2f米，第十次反弹%.3f米。\n", km, high);
    return 0;
}