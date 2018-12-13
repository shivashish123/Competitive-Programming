#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int l[n],h[n];
        for(int i=0;i<n;i++)
            scanf("%d%d",&l[i],&h[i]);
        int q;
        scanf("%d",&q);
        while(q--)
        {
            int m;
            scanf("%d",&m);
            int f[m];
            for(int i=0;i<m;i++)
                scanf("%d",&f[i]);
            int ans=0;
            for(int i=0;i<n;i++)
                {
                    int count=0;
                    for(int j=0;j<m;j++)
                    {
                        if(f[j]>=l[i] && f[j]<=r[i])
                            count++;
                    }
                    if(count&1)
                        ans++;
                }
            printf("%d\n",ans);
        }
    }
    return 0;
}
