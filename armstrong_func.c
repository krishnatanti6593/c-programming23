#include<stdio.h>
void arm(int *num){
    int sum=0,i;
    int temp=*num;
    while(*num>0){
        i=*num%10;
        sum=sum+i*i*i;
        *num=*num/10;
    }
    if(temp==sum){
        printf("%d is ARMSTRONG",temp);
    }
    else{
        printf(" NOT AN AMRSTRONG");
    }
}
int main(){
    int num;
    printf("enter the number = ");
    scanf("%d",&num);
    arm(&num);
    return 0;
}