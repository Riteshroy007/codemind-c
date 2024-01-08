#include<stdio.h>
int main(){
    float a,c;
    scanf("%f",&a);
    float b=0.0;
    for(float i=1;i<=a;i++){
        c=1/i;
        b=b+c;
        
    }
    printf("%.2f",b);
}