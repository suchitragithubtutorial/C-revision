//WAP in C input 2 nos if first number is greater than second number display the diffrence between 2 nos and lastly add the first and second number.
#include<stdio.h>
int main(){
    int a, b, diff, add;
    printf("\nEnter two numbers : ");
    scanf("%d %d",&a, &b);
    if( a > b){
        printf("\n a is greater!!");
        diff = a-b;
        add = a+b;
        printf("\n difference and addition is %d and  %d",diff,add);
    }else{
        printf("\n addition and difference is not possible");
    }
    return 0;
}