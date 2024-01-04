#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c=0;
    int b;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        c=c*10+b;
    }
    printf("%d",c);
}