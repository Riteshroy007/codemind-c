#include<stdio.h>
int main(){
    int a,b,c=0,i;
    scanf("%d",&a);
    int d=a;
    for(i=1;i<a;i++){
        b=a%i;
        if(b==0){
            c=c+i;
        }
    }
    if(c>d){
        printf("True");
    }
    else{
        printf("False");
    }
}