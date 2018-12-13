#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int pre[n];
        vector<pair<long int,int>> v;
        long int a[n];
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
            else
                b[i]=1;
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
        long int point[size];
        memset(point,0,sizeof(point));
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        for(int i=0;i<size;i++)
        {
            if(i==0 && (i+1)<size)
            {
                long long int sr=pre[v[i+1].second]-pre[v[i].second]-v[i].first-2*(v[i+1].first);
                if(sr<=0)
                    {right[i]=1;
                    point[i]+=v[i+1].first;
                    }
            }
            else if(i==size-1)
            {
                long long int sr=pre[v[i].second]-pre[v[i-1].second]-2*(v[i].first)-v[i-1].first;
                if(sr<=0)
                    {left[i]=1;
                    point[i]+=v[i-1].first;
                    }
            }
            else
            {
                long long int sr=pre[v[i+1].second]-pre[v[i].second]-v[i].first-2*(v[i+1].first);
                    if(sr<=0)
                    {right[i]=1;
                    point[i]+=v[i+1].first;
                    }
                    sr=pre[v[i].second]-pre[v[i-1].second]-2*(v[i].first)-v[i-1].first;
                    if(sr<=0)
                        {left[i]=1;
                        point[i]+=v[i-1].first;
                        }
            }
        }
        int start=0,end=0;
        long int max;
        int pos;
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
            max=point[start];
            pos=start;
            while(right[end]==1)
                {
                if(max<point[end])
                    {max=point[end];
                    pos=end;
                    }
                else if(max==point[end])
                {
                    if(v[pos].first>v[end].first)
                    {
                        max=point[end];
                        pos=end;
                    }
                }
                end++;
                }
            if(max<point[end])
                    {max=point[end];
                    pos=end;
                    }
            else if(max==point[end])
                {
                    if(v[pos].first>v[end].first)
                    {
                        max=point[end];
                        pos=end;
                    }
                }
            if(start<=end)
            {
                point[pos-1]-=v[pos].first;
                point[pos]=0;
                for(int i=pos-1;i>=start;i--)
                {
                if(start==i)
                    {
                        if(b[v[i+1].second]==0)
                            b[v[i+1].second]=1;
                        b[v[i].second]=-b[v[i+1].second];
                    }
                else if(point[i]>point[i-1] && (i-1)>=start)
                {
                    b[v[i].second]=1;
                    point[i-1]-=v[i].first;

                }
                else if(point[i]<=point[i-1] && (i-1)>=start)
                    {b[v[i].second]=-1;
                    b[v[i-1].second]=1;
                    if((i-2)>=start)
                    point[i-2]-=v[i-1].first;
                    i--;
                    }
                }
            point[pos+1]-=v[pos].first;
            for(int i=pos+1;i<=end;i++)
            {
                if(i==end)
                   {
                       if(b[v[i-1].second]==0)
                        b[v[i-1].second]=1;
                       b[v[i].second]=-b[v[i-1].second];
                   }
                else if(point[i]>point[i+1] && (i+1)<=end)
                {
                    b[v[i].second]=1;
                    point[i+1]-=v[i].first;

                }
                else if(point[i]<=point[i+1] && (i+1)<=end)
                    {b[v[i+1].second]=1;
                    b[v[i].second]=-1;
                    if((i+2)<=start)
                    point[i+2]-=v[i+1].first;
                    i++;
                    }


            }
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

