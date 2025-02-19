//WAP in C input a number and multiply by four using bit wise leftshift operator.

#include<stdio.h>
int main(){
    int num,mul;
    printf("\nEnter num");
    scanf("%d",&num);
    mul = num<<2;
    printf("\n multiplication = %d",mul);
    return 0;
}