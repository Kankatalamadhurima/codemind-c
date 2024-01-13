#include<stdio.h>
int main()
{
    int num;
    int factorial = 1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        factorial*=i;
    }
    printf("%d",factorial);
}