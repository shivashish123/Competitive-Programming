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
            li incl = v[start].first;
            vector<int> inc,exc,exc2;
            inc.push_back(1);
            li excl = 0;
            exc.push_back(0);
            li excl_new;
            for (int i = start+1; i <=end; i++)
            {
            excl_new = (incl > excl)? incl: excl;
            if(excl_new==incl)
            {
                exc2=inc;
                exc2.push_back(0);
            }
            else
            {
                exc2.push_back(0);
            }
            incl = excl + v[i].first;
            inc=exc;
            inc.push_back(1);
            excl = excl_new;
            exc=exc2;
            }
            if(incl>excl)
            {for(int i=0;i<y;i++)
            {
                if(inc[i]==1)
                {
                    b[v[i+start].second]=-1;
                }
            }
            }
            else
            {for(int i=0;i<y;i++)
            {
                if(exc[i]==1)
                {
                    b[v[i+start].second]=-1;
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
