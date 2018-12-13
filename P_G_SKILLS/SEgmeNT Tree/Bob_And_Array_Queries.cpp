#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int tree[1000001];
void build(int node, int s, int e)
{
    if(s==e)
    {
        tree[node] = 0;
    }
    else
    {
        int mid = (s + e) / 2;
        build(2*node, s, mid);
        build(2*node+1, mid+1, e);
        tree[node] = tree[2*node]+tree[2*node+1];
    }
}
void update(int node, int start, int en, int idx)
{
    if(start == en && en==idx)
    {
        tree[node]++;
    }
    else
    {
        int mid = (start + en) / 2;
        if(start <= idx and idx <= mid)
        {
            update(2*node, start, mid, idx);
        }
        else
        {
            update(2*node+1, mid+1, en, idx);
        }
        tree[node] = tree[2*node]+tree[2*node+1];
    }
}
void update2(int node, int start, int en, int idx)
{
    if(start == en && en==idx)
    {
        if(tree[node]>0)
            tree[node]--;
    }
    else
    {
        int mid = (start + en) / 2;
        if(start <= idx and idx <= mid)
        {
            update2(2*node, start, mid, idx);
        }
        else
        {
            update2(2*node+1, mid+1, en, idx);
        }
        tree[node] =tree[2*node]+tree[2*node+1];
    }
}
int query(int node, int start, int en, int l, int r)
{
    if(r < start or en < l)
    {
        return 0;
    }
    if(l <= start and en <= r)
    {
        return tree[node];
    }
    int mid = (start + en) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, en, l, r);
    return p1+p2;
}
int main()
{
    int n,q,x,y;
    cin>>n>>q;
    build(1,1,n);
    int s;
    while(q--)
    {
        scanf("%d%d",&s,&x);
        if(s==3)
        {
            scanf("%d",&y);
            int ans=query(1,1,n,x,y);
            printf("%d\n",ans);
        }
        else if(s==1)
        {
            update(1,1,n,x);
        }
        else
        {
                update2(1,1,n,x);
        }
    }
}
