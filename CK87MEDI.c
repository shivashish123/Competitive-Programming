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
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(int),cmp);
        int j=(n+k)/2;
        printf("%d\n",a[j]);
    }
    return 0;
}
