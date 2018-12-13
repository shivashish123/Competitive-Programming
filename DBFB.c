#include<bits/stdc++.h>
using namespace std;
long long int fibo[1000001];
#define mod 1000000007;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int m,n;
    scanf("%lld%lld",&m,&n);
    long int a[m],b[m];
    long long int suma=0,sumb=0;
    for(int i=0;i<m;i++)
        {scanf("%ld",&a[i]);
        suma+=a[i];
        }
    suma=suma%mod;
    for(int i=0;i<m;i++)
        {scanf("%ld",&b[i]);
        sumb+=b[i];
        }
    sumb=sumb%mod;
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<n;i++)
        fibo[i]=(fibo[i-1]+fibo[i-2])%mod;
    if(n==1)
    {
    long long int ans=(suma*m)%mod;
    printf("%lld\n",ans);
    continue;
    }
    if(n==2)
    {
    long long int ans=(sumb*m)%mod;
    printf("%lld\n",ans);
    continue;
    }
    long long int ans=(fibo[n-2]*suma)%mod;
    ans+=(fibo[n-1]*sumb)%mod;
    ans=(ans*m)%mod;
    printf("%lld\n",ans);
    }
    return 0;
}
