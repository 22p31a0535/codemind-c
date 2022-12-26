#include<stdio.h>
int fun(int n)
{
    int d,t,c=0,cc=0;
    t=n;
    while(n)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        if(t%d==0)
        {
            cc++;
        }
        c++;
        n=n/10;
    }
    if(c==cc)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
int n1,n2,i;
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
    if(fun(i))
    {
        printf("%d ",i);
    }
}
}