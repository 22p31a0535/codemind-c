#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    float s,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=k=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        k=s/n;
    }
    printf("%.2f",k);
}