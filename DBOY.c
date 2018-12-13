#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int h[n],a[1005];
        for(int i=0;i<n;i++)
        {
          scanf("%d",&h[i]);
        }
         memset(a,5000,sizeof(a));
         int x;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            a[x]=1;
        }
        for(int i=1;i<=1000;i++)
        {
            if(a[i]!=1)
            {
            int min=100000;
            for(int j=0;j<=i/2;j++)
            {
                if((a[j]+a[i-j])<min)
                    min=a[j]+a[i-j];
            }
            a[i]=min;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[2*h[i]];
        printf("%d\n",sum);
    }
    return 0;
}
