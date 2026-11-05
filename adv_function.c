#include<stdio.h>
void swap();
void swap(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
    return ;
}
int main(){
    int num1,num2;
    printf("enter the 1st number = ");
    scanf("%d",&num1);
    printf("enter the 2nd number = ");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("after swaping\n");
    printf("1st number is %d\n",num1);
    printf("2nd number is %d",num2);
    return 0;
}