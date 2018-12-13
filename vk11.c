#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 500001
int main()
{
    int t;
    scanf("%d",&t);
    int h[MAX],g[MAX];
    memset(h,-1,sizeof(h));
    memset(g,-1,sizeof(g));
    while(t--)
    {
        int n,tem;
        scanf("%d",&n);
        long long int dif=0;
        int y=1;
        int j=2;
        while(y<=n)
        {
            tem=j;
            int z[10]={0};
            int l[10]={0};
            int di=0;
            while(tem>0)
            {
              int ti=tem%10;
                z[ti]++;
                l[ti]++;
                di++;
                tem=tem/10;
            }
            di=di-z[0];
            int f=0;
            di--;
            for(int h=1;h<=9;h++)
                {
                while(z[h]!=0 && di>=0)
                    {
                    f+=pow(10,di)*h;
                    z[h]--;
                    di--;
                    }
                }
            if(h[f]!=-1 && f<MAX)
            dif+=y*h[f];
            else if(g[f-500001]!=-1 && f>=MAX)
            dif+=y*g[f-500001];
            else
            {
              int d1=0,d2=0;
                for(int h=1;h<=9;h+=2)
                    {
                    d1=d1+l[h]*h;
                    }
                for(int h=2;h<=8;h+=2)
                {
                    d2=d2+l[h]*h;
                }
            if(f<MAX)
            {
            h[f]=abs(d1-d2);
            dif+=y*h[f];
            }
            else
            {
            g[f-500001]=abs(d1-d2);
            dif+=y*g[f-500001];
            }
            }
            y++;j++;
        }
        y=y-2;
        while(y>=1)
        {
            tem=j;
            int z[10]={0};
            int l[10]={0};
            int di=0;
            while(tem>0)
            {
              int ti=tem%10;
                z[ti]++;
                l[ti]++;
                di++;
                tem=tem/10;
            }
            di=di-z[0];
            int f=0;
            di--;
            for(int h=1;h<=9;h++)
                {
                while(z[h]!=0 && di>=0)
                    {
                    f+=pow(10,di)*h;
                    z[h]--;
                    di--;
                    }
                }
            if(h[f]!=-1 && f<MAX)
            dif+=y*h[f];
            else if(g[f-500001]!=-1 && f>=MAX)
            dif+=y*g[f-500001];
            else
            {
              int d1=0,d2=0;
                for(int h=1;h<=9;h+=2)
                    {
                    d1=d1+l[h]*h;
                    }
                for(int h=2;h<=8;h+=2)
                {
                    d2=d2+l[h]*h;
                }
            if(f<MAX)
            {
            h[f]=abs(d1-d2);
            dif+=y*h[f];
            }
            else
            {
                g[f-500001]=abs(d1-d2);
                dif+=g[f-500001];
            }
            }
            y--;j++;
            }
        printf("%lld\n",dif);
    }
    return 0;
}
