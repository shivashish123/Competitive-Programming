#include<stdio.h>
#include<math.h>
long long int max(long long int a,long long int b)
{
    if(a>b)
        return a;
    else
        return b;
}
long long int min(long long int a,long long int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
    long long int maximum=0;
    long long int maxl[10005]={0};
    long long int minl[10005]={0};
    long long int maxr[10005]={0};
    long long int minr[10005]={0};
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            maxl[i]=a[i];
            minl[i]=a[i];
        }
        else
        {
            maxl[i]=max(a[i],maxl[i-1]+a[i]);
            minl[i]=min(a[i],minl[i-1]+a[i]);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            maxr[i]=a[i];minr[i]=a[i];
        }
        else
        {
            maxr[i]=max(a[i],maxr[i+1]+a[i]);
            minr[i]=min(a[i],minr[i+1]+a[i]);
        }
    }
    for(int i=0;i<n-1;i++)
    {
        long long int h=max(abs(maxl[i]-minr[i+1]),abs(maxr[i+1]-minl[i]));
        if(h>maximum)
            maximum=h;
    }
    printf("%lld\n",maximum);
    }
    return 0;
}
