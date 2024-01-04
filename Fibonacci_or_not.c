#include<stdio.h>
int main(){
    int a,i,b,fib1=0,fib2=1,count=0,c;
    scanf("%d",&a);
    c=a;
    while(c!=0){
        b=fib1+fib2;
        fib1=fib2;
        fib2=b;
        c--;
        if(fib1==a) count+=1;
        
    }
    if(count!=0) printf("True");
    else printf("False");
}
