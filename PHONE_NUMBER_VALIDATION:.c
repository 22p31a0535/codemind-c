#include<stdio.h>
int main()
{
    long int n,c=0;
    scanf("%ld",&n);
    while(n>0)
    {
        n=n/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else if(n/10000000000!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}