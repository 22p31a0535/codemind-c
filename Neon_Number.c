#include<stdio.h>
int main()
{
    int n,d,s=0,e;
    scanf("%d",&n);
    e=n*n;
    while(e!=0)
    {
        d=e%10;
        e=e/10;
        s=s+d;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}