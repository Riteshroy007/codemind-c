#include<stdio.h>
int main(){
    int a,b,c,d=0;
    scanf("%d",&a);
    b=a;
    while(b!=0){
        c=b%10;
        b=b/10;
        d=d*10+c;
    }
    if(d==a){
        printf("True");
    }
    else{
        printf("False");
    }
}