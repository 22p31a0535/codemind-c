#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&d,&a,&b,&c);
    if(d==a||d==b||d==c||d==a+b||d==b+c||d==a+c)
    printf("YES");
    else
    printf("NO");
}