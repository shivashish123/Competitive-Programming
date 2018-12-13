#include<bits/stdc++.h>
#define mod 1000000007
long long int fact[10000001];
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
long long int modp(long int x, long int y, long int m)
{
    long long int ans = 1;
    x = x % m;
    while (y > 0)
    {
        if (y & 1)
            ans = (ans*x) % m;
        y = y>>1;
        x = (x*x) % m;
    }
    return ans;
}
long long int nCr(long int n,long int r)
{
        long long int ans = fact[n];
        ans=(ans*modInverse(fact[r],mod))%mod;
        ans=(ans*modInverse(fact[n-r],mod))%mod;
        return ans;
}
int main()
{
    long long int n,k,a,b;
    scanf("%lld%lld%lld%lld",&n,&k,&a,&b);
    if(n==1)
    {printf("%lld\n",k);
    return 0;
    }
    fact[0]=1;
    for(int i=1;i<=n;i++)
        fact[i]=(fact[i-1]*i)%mod;
    long long int c1=(a*a)%mod;
    long long int ans=0;
    long long int y=((2*a)%mod+((4*b)%mod*k)%mod)%mod;
    long long int u;
    for(int i=0;i<=n/2;i++)
    {
        long long int pro=nCr(2*n-2*i-2,n-i-1);
        pro=(pro*nCr(n-i,i))%mod;
        pro=(pro*modp(y,n-2*i,mod))%mod;
        pro=(pro*modp(c1,i,mod))%mod;
        pro=(pro*modInverse(n-i,mod))%mod;
        pro=(pro*modInverse(modp(2,2*n-2*i-1,mod),mod))%mod;
        if(i%2==0)
            ans=(ans+pro)%mod;
        else
            ans=(ans-pro+mod)%mod;
    }
    ans=(ans*modInverse(2*b,mod))%mod;
    printf("%lld\n",ans);
    return 0;
}
