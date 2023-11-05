#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n1,m1,k1,n2,m2,k2;
    scanf("%d%d%d%d%d%d",&n1,&m1,&k1,&n2,&m2,&k2);
    if(n1<=m1-k1)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
    if(n2<=m2-k2)
    {
      printf("YES
");  
    }
    else
    {
        printf("NO
");
    }
}