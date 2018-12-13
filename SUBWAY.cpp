#include<bits/stdc++.h>
using namespace std;
vector<int> a[5001];
vector<int> b[1000001];
bool vis[5001];
int src,des;
map<pair<int,int>,int> p;
int found=0;
vector<int> s;
int cost=0;
int c1=0;
int siz;
bool dfs(int x)
{
    vis[x]=true;
    if(x==des)
    {
        s.push_back(x);
        return true;
    }
    for(unsigned int j=0;j<a[x].size();j++)
    {
        if(!vis[a[x][j]])
        {
        s.push_back(x);
        if(!dfs(a[x][j]))
        {
            s.pop_back();
        }
        else

            return true;
        }
    }
    return false;
}
void dfs2(int i,int prev)
{
        if(i==siz-1)
            return;
        int ux=s[i],uy=s[i+1];
        pair<int,int> l;
        if(ux>uy)
        {
            l.first=uy;l.second=ux;
        }
        else
        {
            l.first=ux;l.second=uy;
        }
        int y=p.at(l);
        int ps=c1;
        int r1=c1;
        for(unsigned int j=0;j<b[y].size();j++)
        {
            if(b[y][j]!=prev)
                c1++;
            dfs2(i+1,b[y][j]);
            r1=max(r1,c1);
            c1=ps;
        }
        c1=r1;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int k=0;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        pair<int,int> l;
        if(u>v)
        {
            l.first=v;l.second=u;
        }
        else
        {
            l.first=u;l.second=v;
        }
        if(p.count(l)==0)
        {
            p.insert(make_pair(l,k));
            a[u].push_back(v);
            a[v].push_back(u);
            b[k].push_back(w);
            k++;
        }
        else
        {
            int y=p.at(l);
            b[y].push_back(w);
        }
    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        cost=0;
        for(int i=1;i<=5000;i++)
            vis[i]=false;
        scanf("%d%d",&src,&des);
        if(src==des)
        {
            printf("0\n");continue;
        }
        vis[src]=true;
        s.clear();
        s.push_back(src);
        for(unsigned int i=0;i<a[src].size();i++)
        {
                if(!vis[a[src][i]])
                {
                    if(dfs(a[src][i]))
                        break;
                }
        }
        siz=s.size();
        int ux=s[0],uy=s[1];
        pair<int,int> l;
        if(ux>uy)
        {
            l.first=uy;l.second=ux;
        }
        else
        {
            l.first=ux;l.second=uy;
        }
        int y=p.at(l);
        for(unsigned int i=0;i<b[y].size();i++)
        {
            c1=0;
            dfs2(1,b[y][i]);
            cost=max(cost,c1);
            if(c1==siz-2)
                break;
        }
        cout<<cost<<endl;
    }
    return 0;
}
