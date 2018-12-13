#include<stdio.h>
#define mod 1000000007
long int cmp(const void *a,const void *b)
{
    return(*(long int*)a-*(long int *)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    long long int max=0;
    long long int min=0;
    long int a[n];
    for(int i=0;i<n;i++)
        {scanf("%ld",&a[i]);
        }
    qsort(a,n,sizeof(long int),cmp);
    for(int j=0;j<n;j++)
    {
        p=(2*p+a[i])%mod;
        q=(2*p+a[n-1-i])%mod;
    }
    long long int f=(q-p+mod)%mod;
    printf("%lld\n",f);
    }
    return 0;
}
