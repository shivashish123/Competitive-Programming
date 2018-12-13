#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int h[1000000]={-1};
    while(t--)
    {
        int n,tem;
        scanf("%d",&n);
        int y=1;
        int j=2;
        long long int dif=0;
        while(y<=n)
        {
            tem=j;
            int z[10]={0};
            int l[10]={0};
            int dig=0;
            while(tem>0)
            {
              int ti=tem%10;
                z[ti]++;
                l[ti]++;
                dig++;
                tem=tem/10;
            }
            int f=0;
            di--;
            for(int h=1;h<=9;h++)
                {
                while(z[h]!=0)
                    {
                    f+=pow(10,di)*h;
                    z[h]--;
                    di--;
                    }
                }
            if(h[f]!=-1)
            dif+=y*h[f];
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
            h[f]=abs(d1-d2);
            dif+=y*h[f];
            }
            y++;j++;
        }
        y=y-2;
        while(y>=1)
        {
            tem=j;
            int z[10]={0};
            int l[10]={0};
            int dig=0;
            while(tem>0)
            {
              int ti=tem%10;
                z[ti]++;
                l[ti]++;
                dig++;
                tem=tem/10;
            }
            int f=0;
            di--;
            for(int h=1;h<=9;h++)
                {
                while(z[h]!=0)
                    {
                    f+=pow(10,di)*h;
                    z[h]--;
                    di--;
                    }
                }
            if(h[f]!=-1)
            dif+=y*h[f];
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
            h[f]=abs(d1-d2);
            dif+=y*h[f];
            }
            y--;j++;
        }
        printf("%lld\n",dif);
    }
    return 0;
}
