#include<stdio.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);
    r=1;
    for(i=1;i<=n;i++)
    r=r*i;
    {
        printf("%d",r);
    }
}