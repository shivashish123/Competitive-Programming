#include<stdio.h>
long long int cmp(const void *a,const void *b)
{
    return (*(long long int*)a-*(long long int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,e,m;
        scanf("%lld%lld%lld%lld",&n,&k,&e,&m);
        long long int a;
        long long int sum[n-1];
        for(int i=0;i<n-1;i++)
        {
            long long int s=0;
            for(int j=0;j<e;j++)
            {
                scanf("%lld",&a);
                s+=a;
            }
            sum[i]=s;
        }
        qsort(sum,n-1,sizeof(long long int),cmp);
        long int t=0;
        long int x;
        for(int h=0;h<e-1;h++)
                {
                    scanf("%ld",&x);
                    t+=x;
                }
        long int req=sum[n-k-1]+1;
            if(req<t)
                printf("0\n");
            else if((req-t)<=m)
                printf("%ld\n",(req-t));
            else
                printf("Impossible\n");
    }
    return 0;
}
