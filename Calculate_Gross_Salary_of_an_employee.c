#include<stdio.h>
int main()
{
    float b,h,d,p,g;
    scanf("%f%f%f",&b,&h,&d);
    p=0.12*b;
    printf("%.2f
",p);
    g=(b+h+d+p);
    printf("%.2f",g);
}