#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    float p;
    p=pow((c-a)*(c-a)+(b-d)*(b-d),0.5);
    printf("%.4f",p);
}