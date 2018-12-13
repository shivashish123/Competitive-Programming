#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     int m,q;
     scanf("%d%d",&m,&q);
    long int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(int h=0;h<q;h++)
    {
        long int x,l,r;
        scanf("%ld%ld%ld",&x,&l,&r);
        if(x==2)
        {
            a[l-1]=r;
        }
        else
        {
            long long int max=0;
            for(int f=l;f<r-1;f++)
            {
                if(((a[f]-a[l-1])*(a[r-1]-a[f]))>0)
                long long int y=(a[f]-a[l-1])*(a[r-1]-a[f]);
                if(y>max)
                    max=y;
            }
            printf("%lld\n",max);
        }
    }
    }
    return 0;
}
