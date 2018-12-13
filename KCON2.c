#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[1000000];
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        if((n*k)<=100000)
        {
            for(int i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
            for(int j=1;j<k;j++)
                a[n*j+i]=a[i];
            }
            long int r=a[0];
            long int sum=r;
            if(sum<0)
                sum=0;
            for(int i=1;i<n*k;i++)
            {
                sum+=a[i];
                if(sum>r)
                    r=sum;
                if(sum<0)
                    sum=0;
            }
            printf("%ld\n",r);
            continue;
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            a[n+i]=a[i];
            a[2*n+i]=a[i];
        }
        long int r=a[0];
        long int sum=a[0];
        if(sum<0)
            sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=a[i];
            if(sum>r)
                r=sum;
            if(sum<0)
                sum=0;
        }
        if(k==1)
        {
            printf("%d\n",r);
            continue;
        }
        for(int i=n;i<2*n;i++)
        {
            sum+=a[i];
            if(sum>r)
                r=sum;
            if(sum<0)
                sum=0;
        }
        if(k==2)
        {
            printf("%d\n",r);
            continue;
        }
        long int m=r;
        for(int i=2*n;i<3*n;i++)
        {
            sum+=a[i];
            if(sum>m)
                m=sum;
            if(sum<0)
                sum=0;
        }
        long int dif=m-r;
        long int ans=m+dif*(k-3);
        printf("%ld\n",m);
    }
    return 0;
}
