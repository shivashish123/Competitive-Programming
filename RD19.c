#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],flag[n];
        int c1,c2,c3,c4;
        int p=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i==0)
                c1=a[i];
            else
            {
                c2=__gcd(c1,a[i]);
                if(c2!=1)
                    p++;
            }
        }
        if(p==n-1)
        {printf("-1\n");
        continue;
        }
        memset(flag,0,sizeof(flag));
        for(int i=0;i<n-1;i++)
        {
            if(flag[i]==0)
            {
            c3=a[i];
            for(int j=i+1;j<n;j++)
            {c4=__gcd(c3,a[j]);
            if(c4!=1)
                flag[j]=1;
            }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(flag[i]==1)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
