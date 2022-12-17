#include<stdio.h>
int main()
{
    int a,b,c,n,i,k=0;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
      c=a+b;
      a=b;
      b=c;
    if(c==n)
    {
        k+=1;
        printf("True");
    }
    }
    if(k==0)
    {
        printf("False");
    }
}