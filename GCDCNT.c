#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&q);
    while(q--)
    {
        int x,l,r,val;
        scanf("%d",&x);
        if(x==1)
        {
            scanf("%d%d",&l,&val);
            a[l-1]=val;
        }
        else
        {
            scanf("%d%d%d",&l,&r,&val);
            int count=0;
            for(int i=l-1;i<r;i++)
            {
                int h=__gcd(a[i],val);
                if(h==1)
                    count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
