#include<stdio.h>
#include<math.h>
int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int n,q,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&q);
    qsort(a,n,sizeof(int),cmp);
    while(q--)
    {
        scanf("%d",&x);
        int z=ceil(n/(x+1));
        long int sum=0;
        for(int i=0;i<z;i++)
            sum+=a[i];
        printf("%ld\n",sum);
    }
    return 0;
}
