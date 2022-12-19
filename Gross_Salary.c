#include<stdio.h>
int main()
{
    int b,d,h;
    float g;
    scanf("%d",&b);
    if(b<=10000)
    {
        d=(b*0.8);
        h=(b*0.2);
        g=(h+d+b);
        printf("%.2f",g);
    }
    else if(b<=20000)
    {
        d=(b*0.9);
        h=(b*0.25);
        g=(h+d+b);
        printf("%.2f",g);
    }
    else 
    {
        d=(b*0.95);
        h=(b*0.3);
        g=(h+d+b);
        printf("%.2f",g);
    }
}