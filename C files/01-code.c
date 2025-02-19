//WAP in C input 2 numbers find out addition, subtraction, multiplication, division and modulus value
#include<stdio.h>
int main() {
    int a, b, add, sub, mul, div, mod;
    printf("\n Enter the two numbers");
    scanf("%d %d",&a, &b);
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;
    printf("\n Addition = %d",add);
    printf("\n subtraction = %d",sub);
    printf("\n multiplication = %d", mul);
    printf("\n division = %d",div);
    printf("\n modulus = %d",mod);
    return 0;
}