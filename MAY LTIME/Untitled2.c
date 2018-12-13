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
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    long int ans=-1;
    for(int i=0;i<(2*n-1);i++)
    {
        long int sum=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(j+k==i)
                    sum+=a[j][k];
            }
        }
        if(sum>ans)
            ans=sum;
    }
    printf("%ld\n",ans);
    }
    return 0;
}

