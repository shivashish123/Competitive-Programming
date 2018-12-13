#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n],b[m];
        int c[1000005]={0};
        int d[1000005]={0};
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            c[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
            d[b[i]]++;
        }
        int count=0;
        for(int h=1;h<=1000000;h++)
        {
          if(d[h]==1 && c[h]>=1)
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
