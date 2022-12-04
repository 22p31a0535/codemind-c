#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,c,ci;
    scanf("%f%f%f",&p,&r,&t);
    c=p*(pow((1+r/100),t));
    ci=c-p;
    printf("%.2f",ci);
}