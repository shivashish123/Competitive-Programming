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
    {
        long int n,q;
        scanf("%ld%ld",&n,&q);
        long int a[n];
        for(long int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        qsort(a,n,sizeof(long int),cmp);
        for(long int i=0;i<q;i++)
        {
            long int x;
            scanf("%ld",&x);
            for(long int h=0;h<n;h++)
            {
                x=x/a[h];
                if(x==0)
                    break;
            }
            printf("%ld ",x);
        }
        printf("\n");
    }
  return 0;
}
