#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long int power(int y)
{
    long long int res = 1;
    long long int x=2;
    while (y > 0)
    {
        if (y & 1)
            res = ((res%mod)*(x%mod)) % mod;
        y = y>>1;
        x = ((x%mod)*(x%mod)) % mod;
    }
    res=res%mod;
    return res;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        long long int a[n+1];
        long long int b[n+1];
        long long int sum=0;
        for(int i=0;i<=n;i++)
        {scanf("%lld",&a[i]);
        if(i>0)
        {
            long long int u=power(n-i);
            b[i]=(u*a[i])%mod;
        sum+=b[i];
        sum=sum%mod;
        }
        }
        if(n==1)
        {
            long long int y=(2*((a[1]*a[0])%mod))%mod;
            printf("%lld\n",y);
            continue;
        }
        long long int ans=0;
        long long int p=2;
        for(int i=0;i<n;i++)
        {
            if(i>1)
                p=(p*2)%mod;
            ans+=p*((a[i]*(sum%mod))%mod);
            ans=ans%mod;
            if(i<n)
            sum=sum-b[i+1];
        }
        ans=ans%mod;
        printf("%lld\n",ans);
    }
    return 0;
}
