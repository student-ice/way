#include <stdio.h>
int main(){
    int i,sum=0;
    //用for循环实现
    /*
    for(i=1;i<=100;i++){
        sum+=i;
    }
    */
    //用do～while实现
    do{
        i++;
        sum += i;
    }while(i<100);
    printf("%d\n",sum);
    return 0;
}