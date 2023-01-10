#include<stdio.h>
int main()
{
    int n,r,s=0,d;
    scanf("%d",&n);
    r=n*n;
    while(r!=0)
    {
        d=r%10;
        s=s+d;
        r=r/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}