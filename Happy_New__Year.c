#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=23-a;
    int d=60-b;
    int e=(c*60)+d;
    if(c==0) printf("%d",d);
    else printf("%d",e);
}