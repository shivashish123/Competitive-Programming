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
        int n,x;
        scanf("%d%d",&n,&x);
        int a[n];
        long int sum=0;
        for(int u=0;u<n;u++)
            {
                scanf("%d",&a[u]);sum+=a[u];
            }
        qsort(a,n,sizeof(int),cmp);
        int c=sum/x;
        int d=(sum-a[0])/x;
        if(c==d)
            printf("-1\n");
        else
            printf("%d\n",c);
    }
    return 0;
}
