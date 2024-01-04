#include<stdio.h>
int main(){
    int a,b,c,d=0,e=0,i,f,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++){
        c=a%i;
        if(c==0){
            d=d+i;
        }
    }
    for(j=i;j<b;j++){
        f=b%j;
        if(f==0){
            e=e+i;
        }
    }
    if(d==b){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}