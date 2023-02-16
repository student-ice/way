/*
输出所有的“水仙花数”，所谓“水仙花数”是指一个3位数，其各位数字立方和等于该数本身
*/
#include <stdio.h>
#include <math.h>
int main() {
    int a,i;
    for(i=100;i<1000;i++){
        if(((int)pow(i%10,3)+(int)pow(i/10%10,3)+(int)pow(i/100,3))==i){
            printf("%d ",i);
        }
    }
    printf("是水仙花数\n");
    return 0;
}