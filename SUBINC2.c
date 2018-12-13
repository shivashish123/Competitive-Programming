#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int a[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        long long int max=0;
        long long int r=1;
        for(long long int i=1;i<n;i++)
        {
            if(a[i]>=a[i-1])
            r++;
            else
            {
              max+=r*(r+1)/2;
              r=1;
            }
        }
        max+=r*(r+1)/2;
        printf("%lld\n",max);
    }
    return 0;
}
