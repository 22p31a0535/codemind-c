#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    float k,s=0;
    for(i=a;i<=b;i++)
    {
        k=sqrt(i);
        s=s+k;
    }
    printf("%.2f",s);
}