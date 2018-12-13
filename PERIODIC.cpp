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
        vector<int> v;
        int start=-1;
        int flag=0;
        int fl=0;
        int a[n];
        int period=-1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=-1)
              {
               v.push_back(i);
              }
        }
        int r1=v.size();
        if(r1==0)
        {
            printf("inf\n");
            continue;
        }
        int high=1e9,low=1;
        int mid;
        while(low<=high)
        {
        fl=0;
        mid=(high+low)/2;
        cout<<low<<" "<<high<<" "<<mid<<endl;
        for(int i=0;i<r1-1;i++)
        {
            if(a[v[i]]==a[v[i+1]])
            {
                if((v[i+1]-v[i])%mid!=0)
                {
                  fl=1;break;
                }
                if(a[v[i+1]]>mid)
                {
                    fl=1;break;
                }
            }
            if(a[v[i]]<a[v[i+1]])
            {
                if((a[v[i+1]]-a[v[i]])!=((v[i+1]-v[i])%mid))
                {
                    fl=1;break;
                }
                if(a[v[i]]>mid || a[v[i+1]]>mid)
                {
                    fl=1;break;
                }
            }
            if(a[v[i]]>a[v[i+1]])
            {
                if((mid-a[v[i]]+a[v[i+1]])!=((v[i+1]-v[i])%mid))
                {
                    fl=1;break;
                }
                if(a[v[i]]>mid || a[v[i+1]]>mid)
                {
                    fl=1;break;
                }
            }
        }
        if(fl==0)
          {period=max(period,mid);low=mid+1;}
        else
          high=mid-1;
        }
        if(period>1e6)
            printf("inf\n");
        else if(period==-1)
            printf("impossible\n");
        else
            printf("%d\n",period);
    }
}
