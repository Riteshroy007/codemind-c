#include<stdio.h>
int main(){
    int t,n,m,k;
    scanf("%d",&t);
    while(t!=0){
        scanf("%d%d%d",&n,&m,&k);
        int a=m-n;
        if(a>=k){
            printf("YES
");
        }
        else{
            printf("NO
");
        }
        t=t-1;
    }
    
}
