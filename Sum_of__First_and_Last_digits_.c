#include<stdio.h>
int main(){
    int n,x,y,sum;
    scanf("%d",&n);
    x = n%10;
    for(;n>0;n=n/10){
        
    y = n%10;
  
    }
    sum = x+y;
    printf("%d",sum);
}