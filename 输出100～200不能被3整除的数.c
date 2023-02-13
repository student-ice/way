/*
输出100～200的不能被3整除的数
*/
#include <stdio.h>
int main(){
    int i;
    printf("100~200之间不能被3整除的数有：");
    for(i=100;i<=200;i++){
        if(i%3==0)continue;
        printf("%d ",i);
    }
    putchar('\n');
    return 0;
}