#include<bits/stdc++.h>
#define long long int lli
#define long int li
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        lli pre[n];
        vector<pair<li,int>> v;
        li a[n];
        int b[n];
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++)
            {scanf("%ld",&a[i]);
            if(i==0)
                pre[i]=a[i];
            else
                pre[i]=pre[i-1]+a[i];
            }
        int size=0;
        for(int i=0;i<n;i++)
        {
            if(i==0 && a[i]<a[i+1])
            {
                v.push_back(make_pair(a[i],i));
                size++;
            }
            else if(i==n-1 && a[i]<a[i-1])
            {
                v.push_back(make_pair(a[i],i));
                size++;
            }
            else if(a[i]<a[i-1] && a[i]<a[i+1])
            {
                v.push_back(make_pair(a[i],i));
                size++;
            }
        }
        if(size==1)
        {
            for(int j=0;j<n;j++)
            {
                if(j==v[0].second)
                printf("%ld ",-a[j]);
                else
                printf("%ld ",a[j]);
            }
            printf("\n");
            continue;
        }
        int left[size];
        int right[size];
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        for(int i=0;i<size;i++)
        {
            if(i==0 && (i+1)<size)
            {
                long long int sr=pre[v[i+1].second]-pre[v[i].second]-v[i].first-2*(v[i+1].first);
                if(sr<=0)
                    {right[i]=1;
                    }
            }
            else if(i==size-1)
            {
                long long int sr=pre[v[i].second]-pre[v[i-1].second]-2*(v[i].first)-v[i-1].first;
                if(sr<=0)
                    {left[i]=1;
                    }
            }
            else
            {
                long long int sr=pre[v[i+1].second]-pre[v[i].second]-v[i].first-2*(v[i+1].first);
                    if(sr<=0)
                    {right[i]=1;
                    }
                    sr=pre[v[i].second]-pre[v[i-1].second]-2*(v[i].first)-v[i-1].first;
                    if(sr<=0)
                        {left[i]=1;
                        }
            }
        }
        int start=0,end=0;
        for(int i=0;i<size;i++)
        {
            if(left[i]==0 && right[i]==0)
                b[v[i].second]=-1;
        }
        while(end<size)
        {
            while(right[start]==0)
               start++;
            if(start>=size)
                break;
            end=start;
            while(right[end]==1 && end<size)
                end++;
            int y=end-start+1;
            int parent[y];
            int inc[y];
            long long int m[y];
            m[0]=v[start].first;
            parent[0]=-1;
            inc[0]=1;
            if(m[0]<v[start+1].first)
            {
                parent[1]=-1;
                inc[1]=1;
                m[1]=v[start+1].first;
            }
            else
            {
                parent[1]=0;
                inc[1]=0;
                m[1]=v[start].first;
            }
            for(int i=start+2;i<=end;i++)
            {
                long long int u=m[i-2-start]+v[i].first;
                if(u<m[i-1-start])
                {
                    m[i-start]=m[i-start-1];
                    parent[i-start]=i-start-1;
                    inc[i-start]=0;
                }
                else
                {
                    m[i-start]=u;
                    parent[i-start]=i-start-2;
                    inc[i-start]=1;
                }
            }
            int j=y-1;
            while(j>=0)
            {
                if(inc[j]==1)
                    b[v[j+start].second]=-1;
                j=parent[j];
            }
            start=end+1;
            end=end+1;
        }
        for(int j=0;j<n;j++)
            {
                if(b[j]==-1)
                printf("%ld ",-a[j]);
                else
                printf("%ld ",a[j]);
            }

        printf("\n");
    }
}

