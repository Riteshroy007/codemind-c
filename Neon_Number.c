#include<stdio.h>
int main(){
    int a;
    int c=0,n;
    scanf("%d",&a);
    int b=a*a;
    while(b!=0)
    {
        n=b%10;
        b=b/10;
        c=c+n;
    }
    if(c==a){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}