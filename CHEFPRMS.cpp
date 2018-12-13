#include<bits/stdc++.h>
using namespace std;
int prime[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
vector<int> v;
bool vis[201]={false};
int main()
{
    int h;
    for(int i=0;i<25;i++)
    {
        for(int j=i+1;j<25;j++)
        {
            h=prime[i]*prime[j];
            v.push_back(h);
        }
    }
    vector<int>::iterator ip;
    ip = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), ip));
    int r1=v.size();
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<r1;j++)
            {
                h=v[i]+v[j];
                vis[h]=true;
            }
    }
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(vis[n])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
