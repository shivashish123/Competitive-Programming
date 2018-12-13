#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1]={0};
    int t;
    for(int j=0;j<n;j++)
    {
        scanf("%d",&t);
        a[t]=1;
    }
    for(int j=0;j<=n;j++)
    {
        if(a[j]==0)
            printf("%d ",j);
    }
    return 0;
}
