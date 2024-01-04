#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d%d",&a,&b);
    while(n!=0){
        n=b%a;
        b=a;
        a=n;
        
    }
    printf("%d",b);
}