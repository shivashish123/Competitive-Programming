#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        long long int x,y;
        cin>>n>>m>>x>>y;
        long long int ans=0;
        x--;
        y--;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==x && j==x)
                {
                    continue;
                }
                ans=ans+(n*m)-2;
                if(i==x)
                {
                    ans-=min(n-1-i,m-1-j);
                    ans-=min(i,j);
                    ans-=min(i,m-1-j);
                    ans-=min(n-1-i,j);
                    ans-=n-1;
                    if(j<y)
                    {
                        ans-=(y-j-1);
                    }
                    else
                        ans-=j-y-1;
                }
                else if(j==y)
                {
                    ans-=min(n-1-i,m-1-j);
                    ans-=min(i,j);
                    ans-=min(i,m-1-j);
                    ans-=min(n-1-i,j);
                    ans-=m-1;
                    if(i<x)
                    {
                        ans-=(x-i-1);
                    }
                    else
                        ans-=i-x-1;
                }
                else if(abs(x-i)==abs(y-j))
                {
                    ans-=min(n-1-i,m-1-j);
                    ans-=min(i,j);
                    ans-=min(i,m-1-j);
                    ans-=min(n-1-i,j);
                    ans-=m-1;
                    ans-=n-1;
                    if(i>x && y>j)
                        ans+=min(n-1-x,m-1-y);
                    else if(i>x)
                        ans+=min(n-1-x,y);
                    else if(y>j)
                        ans+=min(m-1-y,x);
                    else
                        ans+=min(x,y);
                }
                else
                {
                    ans-=min(n-1-i,m-1-j);
                    ans-=min(i,j);
                    ans-=min(i,m-1-j);
                    ans-=min(n-1-i,j);
                    ans-=m-1;
                    ans-=n-1;
                }
            }
        }
    }
    return 0;
}

