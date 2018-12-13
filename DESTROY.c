#include<stdio.h>
long int cmp(const void *a,const void *b)
{
    return (*(long int*)a-*(long int*)b);
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
        int count[50005]={0};
        int l=0;
        for(int i=0;i<n-1;i++)
            {
                if(a[i]==a[i+1])
                    count[l]++;
                else
                {
                    count[l]++;
                    l++;
                }
            }
        if(a[n-1]==a[n-2])
            count[l]++;
        else
        {l++;
        count[l]++;
        }
    }
    return 0;
}
