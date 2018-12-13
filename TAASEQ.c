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
        long int a[n];
        long int f[n],g[n];
        for(int i=0;i<n;i++)
            {scanf("%ld",&a[i]);
            }
        if(n==2)
        {
            printf("%ld",min(a[0],a[1]));
            continue ;
        }
        if(n==3)
        {
            printf("%ld",min(min(a[0],a[1]),a[2]));
            continue ;
        }
        f[0]=1;f[1]=1;
        for(int i=2;i<n;i++ )
        {
            if(a[i]-a[i-1]==a[i-1]-a[i-2] && f[i-1])
                f[i]=1;
        }
        g[n-1]=1;g[n-2]=1;
        for(int i=n-3;i>=0;i--)
            {
                if(a[i]-a[i+1]==a[i+1]-a[i+2] && g[i+1])
                    g[i]=1;
            }
        long long int ans=2000000000;
        if(g[1])
        {
            ans=min(ans,a[0]);
        }
        if(f[n-2])
            ans=min(ans,a[n-1]);
        if (f[n - 3] && a[n - 4] - a[n - 3] == a[n - 3] - a[n-1])
            ans = min(ans, a[n - 2]);
        if (g[2] && a[0] - a[2] == a[2] - a[3])
            ans = min(ans, a[1]);
        for(int i=2;i<n - 2;i++) {
    if (f[i - 1] && g[i + 1] && a[i - 2] - a[i - 1] == a[i - 1] - a[i + 1]
                             && a[i + 1] - a[i + 2] == a[i - 1] - a[i + 1]) {
      ans = min(ans, a[i]);
    }
  }

  if (ans==2000000000) {
    printf("%lld\n",-1);
  }
  else
    printf("%lld\n",ans);

    }
    return 0;
}
