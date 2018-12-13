#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long int dp[10000005];
long long int modInverse(long long int val, long long int m)
{
    long long int n = m;
    long long int y = 0;
     long long int x=1;
    while (val > 1)
    {
        long long int q = val / m;
        long long int t = m;
        m = val % m, val = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
       x += n;
 return x;
}
int main()
{
    long long int n,a,b,k;
    scanf("%lld%lld%lld%lld",&n,&k,&a,&b);
    dp[1]=k;
    dp[2]=(a*k)%mod+(b*(k*k)%mod)%mod;
    for(long long int i=3;i<=n;i++)
    {
        dp[i]=((((2*i-3)*((a+(2*k*b)%mod)%mod))%mod)*dp[i-1])%mod;
        dp[i]=dp[i]-((((((a*a)%mod)*(i-3))%mod)*dp[i-2])%mod);
        dp[i]=(dp[i]+mod)%mod;
        dp[i]=(dp[i]*modInverse(i,mod))%mod;
    }
            printf("%lld\n",dp[n]);
    return 0;
}
