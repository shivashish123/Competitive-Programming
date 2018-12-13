#include<stdio.h>
#include<math.h>
#define mod 1000000007
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int l,r;
        scanf("%ld%ld",&l,&r);
        int c=0,d=0;
        long int h=l,g=r;
        while(h>0)
        {
            c++;
            h=h/10;
        }
        while(g>0)
        {
            d++;
            g=g/10;
        }
        long int s=0;
        if(c==d)
        {
            for(long int i=l;i<=r;i++)
                s=(s+i*c)%mod;
        }
        else
        {
            long int f=pow(10,c);
            long int k=pow(10,d);
            int dig=c;
            long int i=l;
            while(f<=k)
            {
                while(i<f&&i<=r)
                {
                    s=(s+i*dig)%mod;
                    i++;
                }
                f=f*10;
                dig++;
            }
        }
        printf("%ld\n",s);
    }
    return 0;
}
