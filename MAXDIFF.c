#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        long int sum=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        qsort(a,n,sizeof(int),cmp);
        if(k<(n-k))
        {
          for(int h=0;h<k;h++)
            sum=sum-2*a[h];
        }
        else
        {
           for(int h=0;h<(n-k);h++)
            sum=sum-2*a[h];
        }
        printf("%ld\n",sum);
    }
    return 0;
}
