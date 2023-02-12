#include <stdio.h>
/*
    p   数组首元素地址
    m   存储数组最大值
    n   存储数据最小值
    j   存储平均值
    num 取前num项
*/
void fun(double * p,double * max,double * min,double * avg,int n)
{
    int i;  double m1,m2,sum;
    m1=m2=sum=p[0];
    for ( i = 1; i < n; i++)
    {
        if(*(p+i)>m1) m1 = *(p+i);
        if(p[i]<m2) m2 = p[i];
        sum += p[i];
    }
    *avg = sum/n;   //平均值
    *max = m1;      //最大值
    *min = m2;      //最小值
}

void main()
{
    int n;
    double max,min,avg;
    double a[10];
    int i;
    printf("请输入10个数：");
    for(i=0;i<10;i++){
        
        scanf("%lf",a+i);
    }
    printf("请输入要返回前几项的最大值最小值平均值：");
    scanf("%d",&n);
    fun(a,&max,&min,&avg,n);
    printf("最大值：%.2f\n最小值：%.2f\n平均值：%.2f\n",max,min,avg);
}

