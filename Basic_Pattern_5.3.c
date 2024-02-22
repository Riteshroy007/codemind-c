#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d",b);
        }
        b--;
        for(int k=1;k<i;k++){
            printf("*");
        }
        printf("
");
    }
}