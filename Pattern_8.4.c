#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
    char ch=(char)i+64;
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1) printf("%c",ch);
            else printf(" ");
        }
        printf("
");
    }
}