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
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        int p=0,ans=0;
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            p++;
            else
            {
                ans+=p;
                p=0;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
