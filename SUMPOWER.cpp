#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,k;
    scanf("%d%d",&n,&k);
    string st;
    cin>> st;
    int r1=st.length();
    int change[r1];
    int pre[r1];
    long int ans=0;
    for(int i=1;i<r1;i++)
    {
        if(st[i]!=st[i-1])
            change[i]=1;
        else
            change[i]=0;
        pre[i]=-1;
    }
    int l=1,r=min(r1-k,k);
    int p=1;
    while(p<=r)
    {
            pre[l]=p;
            p++;
            l++;
    }
    p=1;
    l=r1-1;
    while(p<=r)
    {
            pre[l]=p;
            p++;
            l--;
    }
    for(int i=1;i<r1;i++)
    {
        if(pre[i]==-1)
            pre[i]=r;
    }
    for(int i=1;i<r1;i++)
        ans+=change[i]*pre[i];
    printf("%ld\n",ans);
    }
    return 0;
}
