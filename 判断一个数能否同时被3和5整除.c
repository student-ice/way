#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,a;
    printf("请输入一个整数:");
    scanf("%d",&a);
    if(a%3==0&&a%5==0){
        printf("%d能被3和5整除\n",a);
    }else{
        printf("%d不能被3和5整除\n",a);
    }
    return 0;
}
