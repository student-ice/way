#include <stdio.h>
int main(){
    int i,j,a[100];
    for(i=0;i<100;i++){
        a[i]=i+1;
    }
    a[0]=0;
    for(i=3;i<100;i++){
        for(j=2;j<a[i];j++){
            if(a[i]%j==0)a[i]=0;
        }
    }
    for(i=0;i<100;i++){
        if(a[i]==0)continue;
        printf("%d ",a[i]);
    }
    putchar('\n');
    return 0;
}