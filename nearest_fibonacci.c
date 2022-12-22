#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c-n<n-b)
    {
        printf("%d",c);
    }
    else if(c-n>n-b)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d %d",b,c);
    }
}