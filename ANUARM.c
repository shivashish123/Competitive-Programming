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
        int n,m;
        scanf("%d%d",&n,&m);
        int a[m];
        for(int j=0;j<m;j++)
            scanf("%d",&a[j]);
        qsort(a,m,sizeof(int),cmp);
        for(int j=0;j<n;j++)
        {
            int s=abs(a[m-1]-j);
            int y=abs(a[0]-j);
            if(s>y)
                printf("%d ",s);
            else
                printf("%d ",y);
        }
        printf("\n");
    }
    return 0;
}
