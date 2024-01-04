#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int d=1;
    while(a!=0){
        b=a%10;
        if(b>d){
            d=b;
        }
        else{
            d=d;
        }
        a=a/10;
    }
    printf("%d",d);
}