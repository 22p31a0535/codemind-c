#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int h,s;
    h=m/60;
    s=m-(h*60);
    printf("%d Hour(s) %d Minute(s)",h,s);
}