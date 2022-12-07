#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b;
    b=a%100;
    if(b<=9){;
    printf("0");
    }
    printf("%d",b);
}