#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        long int left[n][m],right[n][m],up[n][m],down[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0)
                    up[i][j]=a[i][j];
                else
                    up[i][j]=max(up[i-1][j]+a[i][j],a[i][j]);
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                if(i==n-1)
                    down[i][j]=a[i][j];
                else
                    down[i][j]=max(down[i+1][j]+a[i][j],a[i][j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j==0)
                    left[i][j]=a[i][j];
                else
                    left[i][j]=max(a[i][j],left[i][j-1]+a[i][j]);
            }
        }
        for(int j=m-1;j>=0;j--)
        {
            for(int i=0;i<n;i++)
            {
                if(j==m-1)
                    right[i][j]=a[i][j];
                else
                    right[i][j]=max(right[i][j+1]+a[i][j],a[i][j]);
            }
        }
        long int ans=0;
        for(int i=1;i<=n-2;i++)
        {
            for(int j=1;j<=m-2;j++)
            {
                long int h=a[i][j]+up[i-1][j]+right[i][j+1]+left[i][j-1]+down[i+1][j];
                if(h>ans)
                    ans=h;
            }
        }
        printf("%ld\n",ans);

    }
    return 0;
}
