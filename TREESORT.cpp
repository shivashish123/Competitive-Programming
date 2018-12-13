#include<bits/stdc++.h>
using namespace std;
int m[100001],n[100001];
int lefty[100001],righty[100001];
pair<int,int> a[100001];
int dfs(int s)
{
    if(lefty[s]==-1)
        return m[s];
    m[s]=max(dfs(lefty[s]),dfs(righty[s]));
    return m[s];
}
int dfs2(int s)
{
    if(lefty[s]==-1)
        return n[s];
    n[s]=min(dfs(lefty[s]),dfs(righty[s]));
    return n[s];
}
int check(int s)
{
    if(lefty[s]==-1)
    {
        a[s].first=m[s];
        a[s].second=n[s];
        return 0;
    }
    int lef=check(lefty[s]);
    int rig=check(righty[s]);
    if (lef == -1 || rig == -1)
        return -1;

    if(m[lefty[s]] < n[righty[s]])
    {
            a[s].first = n[lefty[s]];
            a[s].second =m[righty[s]];
            return lef + rig;
    }
    else if (n[lefty[s]] > m[righty[s]])
            {
                a[s].first = n[righty[s]];
                a[s].second =m[lefty[s]];
                return lef + rig + 1;
            }
    else
        return -1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int no;
        scanf("%d",&no);
        for(int i=1;i<=no;i++)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            if(l==-1)
            {
                lefty[i]=-1;righty[i]=-1;
                m[i]=r;n[i]=r;
            }
            else
            {
                lefty[i]=l;righty[i]=r;
            }
        }
        dfs(1);
        dfs2(1);
        int ans=check(1);
        cout<<ans<<endl;
    }
}

