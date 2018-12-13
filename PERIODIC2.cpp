#include<bits/stdc++.h>
using namespace std;
vector<int> v[1000001];
vector<int> f;
vector<int> prime;
void divi(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            prime.push_back(i);
            if (n/i != i)
                prime.push_back(n/i);
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    leastPrimeFactor();
    while(t--)
    {
        int n;
        f.clear();
        scanf("%d",&n);
        int start=-1;
        int flag=0;
        int fl=0;
        int a[n];
        int period=-1;
        for(int i=0;i<=1e6;i++)
          v[i].clear();
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=-1)
              {
               v[a[i]].push_back(i);
               f.push_back(i);
               start=1;
              }
        }
        if(start==-1)
        {
            printf("inf\n");
            continue;
        }
        int r2=f.size();
        for(int i=1;i<=1000000;i++)
        {
        int r1=v[i].size();
        for(int j=0;j<r1-1;j++)
        {
            if(period==-1)
            {
                period=v[i][j+1]-v[i][j];
            }
            else
            {
                period=__gcd(period,v[i][j+1]-v[i][j]);
            }
        }
        }
        if(period==-1)
        {
          for(int i=0;i<r2-1;i++)
          {
            if(a[f[i]]>a[f[i+1]])
            {
              period=a[f[i]]+f[i+1]-f[i]-a[f[i+1]];
              break;
            }
          }
        }
        if(period!=1)
        {
        if(period==-1)
          period=1e7+5;
        divi(period);
        sort(prime.begin(),prime.end());
        int r3=prime.size();
        for(int l=r3-1;l>=0;l--)
        {
        fl=0;
        period=a[l];
        for(int i=0;i<r2-1;i++)
        {
        if(a[f[i]]==a[f[i+1]])
            {
                if((f[i+1]-f[i])%period!=0)
                {
                  fl=1;break;
                }
                if(a[f[i+1]]>period)
                {
                    fl=1;break;
                }
            }
            if(a[f[i]]<a[f[i+1]])
            {
                if((a[f[i+1]]-a[f[i]])!=((f[i+1]-f[i])%period))
                {
                    fl=1;break;
                }
                if(a[f[i]]>period || a[f[i+1]]>period)
                {
                    fl=1;break;
                }
            }
            if(a[f[i]]>a[f[i+1]])
            {
                if((period-a[f[i]]+a[f[i+1]])!=((f[i+1]-f[i])%period))
                {
                    fl=1;break;
                }
                if(a[f[i]]>period || a[f[i+1]]>period)
                {
                    fl=1;break;
                }
            }
        }
        if(fl==0)
          break;
        if(fl==1 && period==1e7+5)
        {
          flag=1;break;
        }
        }
        }
        if(period==1 || flag==1)
            printf("impossible\n");
        else if(period==1e7+5)
            printf("inf\n");
        else
            printf("%d\n",period);
    }
}

