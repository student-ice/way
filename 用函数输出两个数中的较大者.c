/*
输入两个整数，要求输出其中值较大者。要求用函数来找到大数。
*/
#include <stdio.h>

void max(int a,int b){
    if(a>b)
    printf("较大的是%d\n",a);
    else
    printf("较大的是%d\n",b);
}
int main(){
    int a,b;
    printf("请输入两个整数:");
    scanf("%d%d",&a,&b);
    max(a,b);
    return 0;
}