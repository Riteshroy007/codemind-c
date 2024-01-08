#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int r=0;
    while(a>0){
        r=r*10;
        r=r+(a%10);
        a=a/10;
    }
    printf("%d",r);
}