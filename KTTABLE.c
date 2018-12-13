#include<stdio.h>
int cmp(const void *a,const void *b)
{
    return(*(int*)b-*(int*)a);
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[n+1],b[n];
        a[0]=0;
        for(int h=1;h<n+1;h++)
        {
            scanf("%d",&a[h]);
        }
        for(int h=0;h<n;h++)
        {
            scanf("%d",&b[h]);
        }
        qsort(b,n,sizeof(int),cmp);
        int count=0;
        for(int l=0;l<n;l++)
        {
            int diff=a[l+1]-a[l];
               for(int y=0;y<n;y++)
               {
                   if(b[y]<=diff)
                   {
                       b[y]=0;
                       count++;
                       break;
                   }
               }

        }
        printf("%d\n",count);
    }
    return 0;
}
