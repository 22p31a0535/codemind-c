#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    printf("Equilateral triangle");
    else if(a==b || a==c)
    printf("Isosceles triangle");
    else if(a!=b && b!=c)
    printf("Scalene triangle");
    else
    printf("not triangle");
}