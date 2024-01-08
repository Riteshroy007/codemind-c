#include<stdio.h>
int main(){
    int s,i,j,k;
    scanf("%d",&s);
    for(i=1;i<=s;i++){
        for(j=1;j<=s;j++){
            if(i==j||j+i==s+1) printf("%c",64+i);
            else printf(" ");
        }
        printf("
");
    }
}