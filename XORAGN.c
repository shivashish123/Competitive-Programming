#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        long int a[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        if(n==1)
        {
            printf("%d\n",2*a[0]);
            continue;
        }
        long long int ans=2*a[0];
        for(int i=1;i<n;i++)
            ans=ans^(2*a[i]);
        ans=ans^0;
        printf("%lld\n",ans);
    }
    return 0;
}
