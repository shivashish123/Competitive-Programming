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
        long int a[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        sort(a,a+n);
        int l=n-k;
        int cnt=k;
        for(int j=l;j>=0;j--)
        {
            if(a[j]==a[l])
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
