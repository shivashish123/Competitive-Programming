#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        double p,q;
        cin>>n>>p>>q;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        double u=(p*1.0)/(q*1.0);
        int a1,a2,a3;
        double angl=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=-1;
                int it=lower_bound(a,a+n,a[i]+a[j])-a;
                if(a[it]>a[j])
                {
                        k=it;
                }
                if(k!=-1)
                {
                double h=((a[i]*a[i]+a[j]*a[j]-a[k]*a[k])*1.0)/(2*a[i]*a[j]*1.0)
                if(h>=u)
                {
                    double an=acos(h);
                    if(an>angl)
                    {
                        angl=an;
                        a1=a[i];
                        a2=a[j];
                        a3=a[k];
                    }
                }
                }
                k=-1;
                int it=lower_bound(a,a+n,a[i]+a[j])-a;
                if(a[it]>a[j])
                {
                        k=it;
                }
                if(k!=-1)
                {
                double h=((a[i]*a[i]+a[j]*a[j]-a[k]*a[k])*1.0)/(2*a[i]*a[j]*1.0)
                if(h>=u)
                {
                    double an=acos(h);
                    if(an>angl)
                    {
                        angl=an;
                        a1=a[i];
                        a2=a[j];
                        a3=a[k];
                    }
                }
                }
            }
        }
        cout<<a1<<" "<<a2<<" "<<a3<<endl;

    }
    return 0;
}
