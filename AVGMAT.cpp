#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int h[n+m];
        string s[n];
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='1')
                {
                    p.push_back(make_pair(i,j));
                }
            }
        }
        for(int i=0;i<n+m;i++)
            h[i]=0;
        int r1=p.size();
        int x1,x2,y1,y2;
        int v;
        for(int i=0;i<r1;i++)
        {
            x1=p[i].first;
            y1=p[i].second;
            for(int j=i+1;j<r1;j++)
            {
                x2=p[j].first;
                y2=p[j].second;
                v=abs(x1-x2)+abs(y1-y2);
                h[v]++;
            }
        }
        for(int i=1;i<n+m-1;i++)
            printf("%d ",h[i]);
        printf("\n");
    }
    return 0;
}
