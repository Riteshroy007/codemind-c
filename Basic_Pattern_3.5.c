#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=n+64;
    for(int i=1;i<=n;i++){
        int d=65;
        for(int j=1;j<=n+1-i;j++){
            int b=(char)d;
            printf("%c ",b);
        d++;
        }
        printf("
");
    }
}