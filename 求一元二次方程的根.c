#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double a,b,c;
    double x1,x2;
    double der;
    double der2;
    printf("请输入一元二次方程的二次项系数，一次项系数，常数项: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    der2 = b*b-4*a*c;
    if(der2>0){
        //有两个不相同的实数根
        der = sqrt(der2);
        x1 = (-b+der)/2*a;
        x2 = (-b-der)/2*a;
        printf("%.1f ",x1);
        printf("%.1f \n",x2);
    }else if(der2==0){
        //有两个相等的实数根
        der = sqrt(der2);
        x1 = (-b+der)/2*a;
        x2 = (-b-der)/2*a;
        printf("%.1f ",x1);
        printf("%.1f \n",x2);
    }else {
        //无实数根
        printf("方程无实数根\n");
    }
    return 0;
}
