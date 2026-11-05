#include<stdio.h>
void palidrome(int *num){
    int original=*num;
    int sum=0,rev;
    while(*num!=0){
        rev=*num%10;
        sum=sum*10+rev;
        *num=*num/10;
    }
    if(original==sum){
        printf("palidrome");
    }
    else{
        printf("not palidrome");
    }
    return;
}
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    palidrome(&num);
    return 0;
}