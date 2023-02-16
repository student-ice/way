#include <stdio.h>

int jec(int a){
    if(a==0) return 1;
    if(a==1) return ;
    return a*jec(a-1);
    
}
int main(){
    int a,jc;
    //求a的阶乘
    scanf("%d",&a);
    jc = jec(a);
    printf("%d\n",jc);
    return 0;
}