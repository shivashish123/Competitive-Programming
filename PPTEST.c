#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,w;
        scanf("%d%d",&n,&w);
        int p[n],c[n],t[n];
        for(int i=0;i<n;i++)
            scanf("%d%d%d",&p[i],&c[i],&t[i]);
        int g[n+1][w+1];
        memset(g,0,sizeof(g));
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=w;j++)
            {
                if(j>=t[i])
                {
                    g[i][j]=max((g[i-1][j-t[i]]+p[i]*c[i]),g[i-1][j]);
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=w;j++)
            {
        printf("%d*",g[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
