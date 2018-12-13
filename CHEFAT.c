#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    double a[n];
    for(int i=0;i<n;i++)
        scanf("%lf",&a[i]);
    while(q--)
    {
        int x;
        scanf("%d",&x);
        if(x==0)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            double pro=1;
            for(int i=l-1;i<r;i++)
                pro=pro*(1-a[i]);
            printf("%lf\n",pro);
        }
        else
        {
            int l,r;
            double val;
            scanf("%d%d%lf",&l,&r,&val);
            for(int i=l-1;i<r;i++)
                a[i]=a[i]*val;
        }
    }
    return 0;
}
