#include<stdio.h>
void prime(int *p){
    int isprime=1;
    if(*p<=1){
        isprime=0;
    }
    else{
        for(int i=2;i*i<=*p;i++){
            if(*p%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return ;
}
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    prime(&num);
    return 0;
}