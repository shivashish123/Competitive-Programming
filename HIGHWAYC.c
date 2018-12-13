#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int n;
        double s,y;
        scanf("%d%lf%lf",&n,&s,&y);
        double v[n],d[n],c[n];
        double p[n];
        for(int i=0;i<n;i++)
            scanf("%lf",&v[i]);
        for(int i=0;i<n;i++)
            scanf("%lf",&d[i]);
        for(int i=0;i<n;i++)
            scanf("%lf",&p[i]);
        for(int i=0;i<n;i++)
            scanf("%lf",&c[i]);
        double ans=0;
        double treq=(y*1.0)/(s*1.0);
        double xcurr;
        for(int i=0;i<n;i++)
        {
            if(d[i]==1)
            {
                p[i]=p[i]+ans*v[i];
                if((p[i]-c[i])>0.000001)
                {ans+=treq;
                continue;
                }
                xcurr=p[i]+treq*v[i];
                if(xcurr<(-0.000001))
                    ans+=treq;
                else
                {
                    double dis;
                    dis=-p[i]+c[i]+0.000001;
                    ans+=(dis*1.0)/(v[i]*1.0);
                    ans+=treq;
                }
            }
            else
            {
                p[i]=p[i]-ans*v[i];
                if((p[i]+c[i])<(-0.000001))
                {ans+=treq;
                continue;
                }
                xcurr=p[i]-treq*v[i];
                if(xcurr>(0.000001))
                    ans+=treq;
                else
                {
                    double dis=p[i]+c[i]+0.000001;
                    ans+=(dis*1.0)/(v[i]*1.0);
                    ans+=treq;
                }
            }
        }
        printf("%0.6lf\n",ans);
    }
    return 0;
}
