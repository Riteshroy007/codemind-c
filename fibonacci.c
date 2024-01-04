#include<stdio.h>
int main(){
    int a,i,c,d=0,e=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("%d ",d);
        c=d+e;
        d=e;
        e=c;
    }
}
