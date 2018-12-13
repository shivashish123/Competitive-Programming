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
        long int a[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        qsort(a,n,sizeof(long int),cmp);
        int fl=0;
        for(int i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])>1)
            {
                fl=1;break;
            }
        }
        if(fl==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
