#include<stdio.h>
int main()
{
    int i=1,r,s=0,n,p=1;
    scanf("%d",&n);
    while(i<=n)
    {
        r=n%10;
        p=p*r;
        s=s+r;
        n=n/10;
    }
    if(s<=p)
    {
        printf("%d",p-s);
    }
    else
    {
        printf("%d",s-p);
    }
}