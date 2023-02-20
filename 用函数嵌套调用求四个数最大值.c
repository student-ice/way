#include <stdio.h>
void abcd(int a, int b, int c, int d)
{
    printf("%d\n", max(max(max(a, b), c), d));
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    abcd(a, b, c, d);
    return 0;
}