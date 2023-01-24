#include<stdio.h>
int main()
{
    int n,i,f=0,avg,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
    
}