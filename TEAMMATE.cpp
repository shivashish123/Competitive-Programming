#include<bits/stdc++.h>
using namespace std;
long long int mod=1e9+7;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int cnt[1000001]={0};
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            {scanf("%d",&a[i]);
            cnt[a[i]]++;
            }
        sort(a,a+n);
        long long int ans=1;
        for(int i=n-1;i>0;i-=2)
        {
            cnt[a[i]]--;
            ans=(ans*cnt[a[i-1]])%mod;
            cnt[a[i-1]]--;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
