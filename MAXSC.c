#include<stdio.h>
long int cmp(const void *a,const void *b)
{
    return(*(long int*)a-*(long int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%ld",&a[i][j]);
        for(int i=0;i<n;i++)
            qsort(a[i],n,sizeof(long int),cmp);
        long long int sum=0;
        long int up=a[n-1][n-1];
        sum+=up;
        int fl=0;
        for(int j=n-2;j>=0;j--)
        {
            int check=0;
                for(int i=n-1;i>=0;i--)
                {
                    if(a[j][i]<up)
                    {
                        up=a[j][i];
                        sum+=up;
                        check=1;break;
                    }
                }
                if(check==0)
                {
                    fl=1;break;
                }
        }
        if(fl==0)
            printf("%lld\n",sum);
        else
            printf("-1\n");
    }
    return 0;
}
