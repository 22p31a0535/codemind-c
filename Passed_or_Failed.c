#include<stdio.h>
int main()
{
    int e,m,p,c,k;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&k);
    if(e>35&&m>35&&p>35&&c>35&&k>35)
    printf("PASSED");
    else
    printf("FAILED");
}