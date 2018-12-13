#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int tree[1000001];
void build(int node, int s, int e)
{
    if(s==e)
    {
        tree[node] = a[s];
    }
    else
    {
        int mid = (s + e) / 2;
        build(2*node, s, mid);
        build(2*node+1, mid+1, e);
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}
void update(int node, int start, int en, int idx, int val)
{
    if(start == en && en==idx)
    {
        a[idx]=val;
        tree[node]=val;
    }
    else
    {
        int mid = (start + en) / 2;
        if(start <= idx and idx <= mid)
        {
            update(2*node, start, mid, idx, val);
        }
        else
        {
            update(2*node+1, mid+1, en, idx, val);
        }
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}
int query(int node, int start, int en, int l, int r)
{
    if(r < start or en < l)
    {
        return 1e9;
    }
    if(l <= start and en <= r)
    {
        return tree[node];
    }
    int mid = (start + en) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, en, l, r);
    return min(p1,p2);
}
int main()
{
    int n,q,x,y;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    build(1,1,n);
    string s;
    while(q--)
    {
        cin>>s>>x>>y;
        if(s=="q")
        {
            cout<<query(1,1,n,x,y)<<endl;
        }
        else
            update(1,1,n,x,y);
    }
}
