#include <stdio.h>
int main(){
    int i,j,a[10],min,t;
    for(i=0;i<10;i++){
        scanf("%d",a+i);
    }
    for(i=0;i<10;i++){
        min = 0;
        for(j=1;j<10-i;j++){
            if(a[j]<a[min]){min=j;}
        }
        if(min==9-i){
            continue;
        }else{
            t = a[9-i];
            a[9-i]=a[min];
            a[min]=t;
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",*(a+i));
    }
    putchar('\n');
    return 0;
}