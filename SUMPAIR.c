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
        int n,d;
        scanf("%d%d",&n,&d);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int l=n-1;
        long int sum=0;
        while(l>0)
        {
            if((a[l]-a[l-1])<d)
            {
                sum+=a[l]+a[l-1];
                l=l-2;
            }
            else
                l--;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
