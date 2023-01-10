#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,p,d,k;
    scanf("%d",&n);
    d=log10(n)+1;
    s=n*n;
    p=pow(10,d);
    k=s%p;
    if(k==n)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}