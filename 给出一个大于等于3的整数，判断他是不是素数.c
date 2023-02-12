#include<stdio.h>
int main(){
    int i,a;
    printf("请输入一个大于等于3的整数:");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            break;
        }
    }
    if(i<a)printf("%d不是素数\n",a);
    else printf("%d是素数\n",a);
    return 0;
}