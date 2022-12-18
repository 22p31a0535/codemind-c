#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    c=1;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}