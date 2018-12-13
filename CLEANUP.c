#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n];
        for(int j=0;j<n;j++)
            a[j]=0;
        int b[n],c[n];
        int r=0,e=0;
        int ti;
        for(int x=0;x<m;x++)
        {
            scanf("%d",&ti);
            a[ti-1]=1;
        }
        int fl=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==0 && fl%2==0)
            {b[r++]=j+1;fl++;}
            else if(a[j]==0)
            {
                c[e++]=j+1;fl++;
            }
        }
        if(r==0)
            printf(" \n");
        else
            {for(int u=0;u<r;u++)
                printf("%d ",b[u]);
                printf("\n");
            }
        if(e==0)
            printf(" \n");
        else
            {for(int u=0;u<e;u++)
                printf("%d ",c[u]);
                printf("\n");
            }
    }
    return 0;
}
