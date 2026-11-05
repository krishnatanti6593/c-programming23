#include<stdio.h>
void rev(int *p ){
    int sum=0,rem;
    while(*p!=0){
        rem=*p%10;
        sum=sum*10+rem;
        *p=*p/10;
    }
    printf("reverse = %d", sum);
    return 0;
}
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    rev(&num);
    return 0;
}