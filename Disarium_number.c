#include<stdio.h>
#include<math.h>
int main(){
int a,e,f=0;
scanf("%d",&a);
int b=a,c=0,d=0;
while(b!=0){
    c=c*10+b%10;
    b=b/10;
    d++;
    }
    b=a;
    for(int i=1;i<=d;i++){
       e=c%10;
       c=c/10;
       f=f+pow(e,i);
    }
    if(f==a) printf("True");
    else printf("False");
}