#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {int n;
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++)
        scanf("%d",&a[j]);
    qsort(a,n,sizeof(int),cmp);
      long int d=0;
    while(a[0]!=a[n-1])
    {
        int x=a[n-1]-a[0];
        for(int j=0;j<n-1;j++)
            a[j]+=x;
        d+=x;
        qsort(a,n,sizeof(int),cmp);
    }
    printf("%ld\n",d);
    }
    return 0;
}
