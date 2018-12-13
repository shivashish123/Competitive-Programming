#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int tem,ti;
    int b[1000000];
    int arr[2000005]={-1};
    for(int u=2;u<=2000000;u++)
    {
        int a=0,b=0;
            tem=u;
            while(tem>0)
            {
              ti=tem%10;
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
        int k=2*n;
         long int dif=0;
        while(y<n)
        {
            dif+=y*(arr[j]+arr[k]);
            y++;j++;k--;
        }
        dif+=y*arr[j];
        printf("%lld\n",dif);
    }
    return 0;
}
