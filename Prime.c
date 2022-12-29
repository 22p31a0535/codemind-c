#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
    {
    t=1;
    printf("Not Prime");
    break;
}
}
if(t==0)
{
    printf("Prime");
}
}