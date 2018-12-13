#include<stdio.h>

int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        float av;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(int),cmp);
        long double sum=0;
        for(int i=k;i<n-k;i++)
        {
            sum+=a[i];
        }
        printf("%llf\n",(sum/(n-2*k)));
    }
    return 0;
}
