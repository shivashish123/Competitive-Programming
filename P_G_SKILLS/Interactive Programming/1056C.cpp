#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,t;
    cin>>n>>m;
    vector<pair<int,int>> cnt;
    int a[100001];
    map<int,int> v;
    for(int i=0;i<2*n;i++)
    {
        cin>>x;
        a[i+1]=x;
        cnt.push_back(make_pair(x,i+1));
    }
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        v.insert(make_pair(x,y));
        v.insert(make_pair(y,x));
    }
    sort(cnt.begin(),cnt.end());
    cin>>t;
    if(t==2)
    {
        for(int j=0;j<n;j++)
        {
        cin>>x;
        for(int h=0;h<cnt.size();h++)
        {
            if(cnt[h].second==x)
            {
              cnt.erase(cnt.begin()+h);
              break;
            }
        }
        int ans=-1;
        int pos;
        if(v.count(x)==0)
        {
            ans=cnt[cnt.size()-1].second;
            pos=cnt.size()-1;
        }
        else
        {
            for(int i=0;i<cnt.size();i++)
            {
                if(cnt[i].second==v[x])
                {
                    pos=i;break;
                }
            }
            ans=v[x];
        }
        cnt.erase(cnt.begin()+pos);
        if(v.count(x)!=0)
        {
          int b=v[x];
          v.erase(x);
          v.erase(b);
        }
        if(v.count(ans)!=0)
        {
          int b=v[ans];
          v.erase(ans);
          v.erase(b);
        }
        printf("%d\n",ans);
        fflush(stdout);
        }
    }
    else
    {
        for(int j=0;j<n;j++)
        {
        int ans=-1;
        int pos;
        for(int i=cnt.size()-1;i>=0;i--)
        {
            if(v.count(cnt[i].second)!=0)
            {
                ans=cnt[i].second;
                pos=i;
                break;
            }
        }
        if(ans==-1)
        {
            ans=cnt[cnt.size()-1].second;
            pos=cnt.size()-1;
        }
        cnt.erase(cnt.begin()+pos);
        printf("%d\n",ans);
        fflush(stdout);
        cin>>x;
        for(int h=0;h<cnt.size();h++)
        {
            if(cnt[h].second==x)
            {
              cnt.erase(cnt.begin()+h);
              break;
            }
        }
        if(v.count(x)!=0)
        {
          int b=v[x];
          v.erase(x);
          v.erase(b);
        }
        if(v.count(ans)!=0)
        {
          int b=v[ans];
          v.erase(ans);
          v.erase(b);
        }
        }
    }
    return 0;
}
