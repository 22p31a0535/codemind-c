#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,flag=0,p=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        if(j*j==a[i])
        p+=a[i];
    }
    printf("%d",p);
}