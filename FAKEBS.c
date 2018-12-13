#include<bits/stdc++.h>
using namespace std;
int h[100];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        long int a[n];
        vector<pair<long int,int>> b;
        int g[n];
        map<long int,int> m;
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            m.insert(pair<long int,int>(a[i],i));
            b.push_back(make_pair(a[i],i));
        }
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            g[b[i].second]=i;
        }
        while(q--)
        {
         int ans=0;
         long int x;
         scanf("%ld",&x);
         int f=0;
         if(n==2)
         {
             if(x<a[0])
                printf("-1\n");
             else
                printf("0\n");
             continue;
         }
         int pos=m[x];
         int small=g[pos];
         int big=n-1-small;
         int l=0,r=n-1;
         int fl=0;
         while(l<=r)
         {
             int mid=(l+r)/2;
             if(a[mid]==x)
                break;
             else if(a[mid]>x && m[x]>mid)
             {
                 l=mid+1;
                 h[f++]=-1;
             }
             else if(a[mid]>x)
                {r=mid-1;
                big--;}
             else if(a[mid]<x && m[x]<mid)
             {
                 r=mid-1;
                 h[f++]=1;
             }
             else if(a[mid]<x)
                {l=mid+1;
                small--;}
         }
         int ev=0,od=0;
         for(int i=0;i<f;i++)
         {
             if(h[i]==-1)
             {
                 small--;
                 if(small<0)
                 {
                     fl=1;break;
                 }
                 ev++;
             }
             else
             {
                 big--;
                 if(big<0)
                 {
                     fl=1;break;
                 }
                 od++;
             }
         }
         if(fl==1)
         {
             printf("-1\n");
             continue;
         }
         if(ev>od)
         {
             ans=ev;
         }
         else
            ans=od;
         printf("%d\n",ans);

        }
    }
    return 0;
}
