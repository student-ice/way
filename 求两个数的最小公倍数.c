#include <stdio.h>
int main(){
    int  a,b,i;
    scanf("%d%d",&a,&b);
    if(a>b){
        for(i=b;i>0;i--){
            if(a%i==0&&b%i==0){
                printf("最大公约数为：%d\n",i);
                printf("最小公倍数：%d\n",a*b/i);
            }
        }
    }else{
        for(i=a;i>0;i--){
            if(a%i==0&&b%i==0){
                printf("最大公约数为：%d\n",i);
                printf("最小公倍数：%d\n",a*b/i);
            }
        }
    }
    return 0;
}