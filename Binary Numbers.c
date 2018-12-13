#include<stdio.h>
#include<string.h>
#include<math.h>
#define mod 1000000007
int main()
{
    long long int n;
    scanf("%lld",&n);
    char a[1000000];
    scanf("%s",a);
    int y=strlen(a);
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int p;
        scanf("%d",&p);
        int x=y-p;
        long long int ans=0;
        long int l=1;
        for(int i=y-1;i>=p;i--)
        {
            ans+=l*(a[i]-48);
            l=(l*2)%mod;
        }
        ans=ans%mod;
        for(int i=0;i<p;i++)
            {
                ans+=(a[i]-48)*l;
                l=(l*2)%mod;
            }
            ans=ans%mod;
        printf("%lld\n",ans);

    }
    return 0;
}
