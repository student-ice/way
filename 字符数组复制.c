/*
15.编写一个程序，将字符数组s2中的全部字符复制到字符数组s1中。不用strcpy函
数。复制时，"\0"也要复制过去。"\0"后面的字符不复制。
*/
#include <stdio.h>
int main()
{
    char a[10], b[10], i;
    gets(a);
    gets(b);
    for (i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
    }
    a[i] = '\0';
    puts(a);
    return 0;
}