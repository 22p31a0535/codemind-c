#include<stdio.h>
int main()
{
    int n,k,m,b;
    scanf("%d%d%d",&n,&k,&m);
    b=m*k;
    if(n%b==0)
    printf("%d",n/b);
    else
    printf("%d",n/b+1);
    
}