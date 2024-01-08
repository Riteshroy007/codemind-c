#include<stdio.h>
int main(){
    int a,b,d,e=0,f;
    scanf("%d%d",&a,&b);
    int c=a;
    for(int i=a;i<=b;i++){
        e=0;
        c=i;
        while(c!=0)
        {
            d=c%10;
            c=c/10;
            if(d==0||i%d!=0)
            {
                e++;
                break;
            }
        }
        if(e==0){
            printf("%d ",i);
        }
    }
}