#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int EI;
    scanf("%d",&EI);
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==EI)
        {
            printf("%d ",i);
            found=1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==EI)
        {
            printf("%d",i);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("-1 -1");
    }
}