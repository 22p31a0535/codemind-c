#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,f=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    
    {
    if(a[i]==k)
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