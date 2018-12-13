#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int tem;
    long long int arr[1000005]={-1};
    for(int u=2;u<=1000000;u++)
    {
        int a=0,b=0;
            tem=u;
            while(tem>0)
            {
              int ti=tem%10;
                if((ti)!=0)
                {
                if((ti)&1)
                a+=ti;
                else
                b+=ti;
                }
                tem=tem/10;
            }
            arr[u]=abs(a-b);
    }

    while(t--)
    {
        int n;
        scanf("%d",&n);
        int y=1;
        int j=2;
        long long int dif=0;
        while(y<=n)
        {
            dif+=y*arr[j];
            y++;j++;
        }
        y=y-2;
        while(y>=1)
            {
            dif+=y*arr[j];
            y--;j++;
            }
        printf("%lld\n",dif);
    }
    return 0;
}
