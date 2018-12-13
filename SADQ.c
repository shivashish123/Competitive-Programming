#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,m;
    scanf("%d",&n);
    long int h;
    vector<vector<long int>> v(n,vector<long int>());
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        for(int j=0;j<x;j++)
        {
            scanf("%ld",&h);
            v[i].push_back(h);
        }
    }
    int flag[n]={0};
    /*for(int i=0;i<n;i++)
        sort(v[i].begin(),v[i].end());*/
    scanf("%d",&m);
    while(m--)
    {
        int a,b,l1;
        int l2;
        scanf("%d%d",&a,&b);
        int s1=v[a-1].size();
        int s2=v[b-1].size();
        if(flag[a-1]==0)
            {
                sort(v[a-1].begin(),v[a-1].end());
                flag[a-1]=1;
            }
        if(flag[b-1]==0)
            {
                sort(v[b-1].begin(),v[b-1].end());
                flag[b-1]=1;
            }
        long long int sum=0;
        l1=0;
        for(int i=0;i<s1;i++)
        {

           l1=upper_bound(v[b-1].begin()+l1,v[b-1].end(),v[a-1][i])-v[b-1].begin();
           sum=sum+(s2-l1)*(-1)*v[a-1][i]+l1*v[a-1][i];

           //printf("l1 is %d sum is %lld\n",l1,sum);
        }
        l1=0;
        for(int i=0;i<s2;i++)
        {
           l1=lower_bound(v[a-1].begin()+l1,v[a-1].end(),v[b-1][i])-v[a-1].begin();

           sum=sum+(s1-l1)*(-1)*v[b-1][i]+l1*v[b-1][i];
           //printf("l1 is %d sum is %lld\n",l1,sum);
        }

        printf("%lld\n",sum);
    }
    return 0;
}
