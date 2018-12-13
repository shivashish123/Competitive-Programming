#include<bits/stdc++.h>
#define mod 1000000007
long long int dp[1000001];
long long int sum[1000001];
long long int modInverse(long long int a)
{
    int long long n = mod;
    int long long y = 0;
    int long long x=1;
    while (a > 1)
    {
        long long int q = a / mod;
        long long int t = mod;
        n = n % mod, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
 if (x < 0)
       x += mod;
        return x;
}

int main()
{
    long long int n,a,b,k;
    scanf("%lld%lld%lld%lld",&n,&k,&a,&b);
    sum[0]=0;
    if(a==0)
    {
        dp[1]=k;
        sum[1]=(k*k)%mod;
        dp[2]=(b*((k*k)%mod))%mod;
        sum[2]=sum[1]+(dp[2]*dp[2])%mod;
        for(i=3;i<=n;i++)
        {
        dp[i]=(dp[i-1]*(b*(k*((2*i-3)*(2))%mod)%mod)%mod)%mod;
        dp[i]=(dp[i]*modInverse(i))%mod;
        sum[i]=(sum[i-1]+(dp[i]*dp[i])%mod)%mod;
        }
    }
    else
    {
        dp[1]=k;
        sum[1]=k*k;
        for(int i=2;i<=n;i++)
        {
            dp[i]=(a*dp[i-1])%mod;
            for(int j=1;j<=(i-1);j++)
            {
            dp[i]=(dp[i]+((b*dp[j])%mod*dp[i-j])%M)%M;
            }
         sum[i]=(sum[i-1]+(dp[i]*dp[i])%mod )%mod;
        }

    }
    while(q--)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            long long int ans=sum[l]-sum[r-1];
            ans=(ans+mod)%mod;
            printf("%lld\n",ans);
        }
    return 0;
}
