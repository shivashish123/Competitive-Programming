#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    array<long int,100002> a;
    array<long int,100002> b;
    for(int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    int x,l,r;
    long int val;
    while(q--)
    {
        scanf("%d",&x);
        if(x==1)
        {
            scanf("%d%ld",&l,&val);
            a[l-1]=val;

        }
        else
        {
            scanf("%d%d",&l,&r);
            b=a;
            sort(b.begin()+(l-1),b.end()+(r-100002));
            long int ans=0;
            for(int i=r-1;i>=l+1;i--)
            {
                if((b[i]<(b[i-1]+b[i-2])))
                {ans=b[i]+b[i-1]+b[i-2];
                break;
                }
            }
            printf("%ld\n",ans);
        }
    }
    return 0;
}
