#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    long int a[n];
    for(int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    long long int ans=-1;
    while(q--)
    {
        int l,r;
        ans=-1;
        scanf("%d%d",&l,&r);
        for(int i=l-1;i<r-1;i++)
        {
            for(int j=i+1;j<r;j++)
            {
                long int h=__gcd(a[i],a[j]);
                if(h>ans)
                    ans=h;
            }
        }
        printf("%ld\n",ans);
    }

    return 0;
}
