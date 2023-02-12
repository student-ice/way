#include <stdio.h>
int main(){
    double i;//分母
    double sum=1 ; //和
    int flag=-1;
    for(i=2;i<=100;i++){
        sum += flag*(1/i);
        flag*=-1;
    }
    printf("%f",sum);
    return 0;
}