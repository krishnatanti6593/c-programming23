#include<stdio.h>
void largest(int *a,int *b, int *c){
    if((*a>*b)&&(*a>*c)){
        printf("largest number = %d",*a);
    }
    else if((*b>*a)&&(*b>*c)){
        printf("largest number = %d",*b);
    }
    else{
        printf("largest number = %d",*c);
    }
    return ;
}
int main(){
    int num1,num2,num3;
    printf("enter the 1st number = ");
    scanf("%d",&num1);
    printf("enter the 2nd number = ");
    scanf("%d",&num2);
    printf("enter the 3rd number = ");
    scanf("%d",&num3);
    largest(&num1,&num2,&num3);
    return 0;

}