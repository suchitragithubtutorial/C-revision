//WAP in C input a student name , roll number, four diffrent subject marks, calculate the total and average mark displayed with detail.

#include<stdio.h>
int main(){
    char sname[10];
    int roll, m1, m2, m3, m4, total;
    float avg;
    printf("\n Enter the student name : ");
    scanf("%s", sname);
    printf("\n Enter student roll no : ");
    scanf("%d" , &roll);
    printf("\nEnter m1, m2, m3, m4 : ");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);

    total = m1+m2+m3+m4;
    avg = total/4;
    printf("\nStudent name is %s",sname);
    printf("\nStudent roll number is %d",roll);
    printf("\nAll marks %d%d%d%d",m1, m2, m3, m4);
    printf("\ntotal and average %d %.2f",total, avg);
    return 0;

}