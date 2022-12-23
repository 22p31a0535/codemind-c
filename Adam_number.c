#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k,i,d,s=0;
    k=n*n;
    while(n>0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    int b,c,r=0,f;
    b=s*s;
    while(b>0)
    {
        f=b%10;
        r=r*10+f;
        b=b/10;
    }
    if(r==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}