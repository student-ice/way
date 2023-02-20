#include <stdio.h>
void sum(float a,float b){
    printf("他们的和是：%f\n",a+b);
}
int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    sum(a,b);
    return 0;
}