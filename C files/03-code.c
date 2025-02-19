//WAP in C to swap 2 numbers
#include<stdio.h>
int main(){
    int a, b, c;
    printf("\nEnter two numbers : ");
    scanf("%d %d",&a, &b);
    c=a;
    a=b;
    b=c;
    printf("\n value of a and b is %d %d",a, b);
    return 0;
}