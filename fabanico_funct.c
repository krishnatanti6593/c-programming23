#include<stdio.h>
void fac(int *d){
    int a=0,b=1,sum,c=0;
    for(int i=0;i<=*d;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return ;
}
int main(){
    int d;
    printf("enter the number");
    scanf("%d",&d);
    fac(&d);
    return 0;
}