#include<bits/stdc++.h>
using namespace std;
int bits[26][200005]={0};
bool vis[200005]={false};
int n;
void update(int x,int delta,int p)
{
    for(; x <= 2e5+2; x += x&-x)
        bits[p][x] += delta;
}
int query(int x,int p)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += bits[p][x];
     return sum;
}
int main()
{
    string s;
    cin>>s;
    int r1=s.length();
    for(int i=0;i<r1;i++)
    {
        update(i+1,1,s[i]-'a');
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;string u;
        cin>>x>>u;
        char c=u[0];
        int y=(int)(c-'a');
        int low=1,high=2e5+1;
        int ans;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int y1=query(mid,y);
            if(y1>=x)
            {ans=mid;
            high=mid-1;}
            else
            {
                low=mid+1;
            }
        }
        //cout<<ans;
        vis[ans-1]=true;
        update(ans,-1,y);
    }
    for(int i=0;i<r1;i++)
    {
        if(!vis[i])
            cout<<s[i];
    }

}
