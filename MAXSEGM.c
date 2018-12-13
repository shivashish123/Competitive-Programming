#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int c[n],seen[n];
        long int w[n];
        long long int sum=0;
        long long int ans=0;
        for(int i=0;i<n;i++)
            {scanf("%d",&c[i]);
            seen[i]=0;
            }
        for(int i=0;i<n;i++)
            scanf("%ld",&w[i]);
        int l=0;
        int r=0;
        while(1)
        {
            while(!seen[c[r]] && (r<n))
            {
                seen[c[r]]=1;
                sum+=w[r];
                r++;
            }
            if(ans<sum)
                ans=sum;
            if(r==n)
                break;
            while(seen[c[r]])
            {
                seen[c[l]]=0;
                sum-=w[l];
                l++;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
