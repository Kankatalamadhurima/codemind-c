#include<stdio.h>
int main()
{
    int n,ds=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        ds=ds+r;
        n=n/10;
    }
    printf("%d",ds);
}