#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d",&n,&k);
    m=21-n-k;
    if(m>=1&&m<=10)
    printf("%d",m);
    else
    printf("-1");
    
}