#include<stdio.h>
int main()
{
    int n,r=0;
    scanf("%d",&n);
    int q=n;
    while(q!=0)
    {
        r=r*10+q%10;
        q=q/10;
    }
    printf("%d",r);
}