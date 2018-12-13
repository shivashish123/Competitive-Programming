#include<stdio.h>
#include<math.h>
unsigned long long int gpower(long long int r)
{
    int x=2;
    while((r%x)==0)
    {
      x=x*2;
    }
    x=x/2;
    return x;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        unsigned long long int k;
        scanf("%d%lld",&n,&k);
        unsigned long long int ans;
        unsigned long long int p=pow(2,n);
        if(!(k&1))
        {
            if(k>=p/2)
            {
                unsigned long long int pos=gpower(k);
                ans=(k/pos);
            }
            else
            {unsigned long long int y=p/4;
            int c=1;
            while(y>0)
            {
                if(k>=y)
                {
                    unsigned long long int pos=gpower(k);
                    pos=(k/pos);
                    ans=pos*pow(2,c);
                    break;
                }
                y=y/2;
                c++;
            }
            }
          }
            else
            {
            k=k-1;
            if(k>=p/2)
            {
                unsigned long long int pos=gpower(k);
                ans=(k/pos);
            }
            else
            {unsigned long long int y=p/4;
            int c=1;
            while(y>0)
            {
                if(k>=y)
                {
                    unsigned long long int pos=gpower(k);
                    pos=(k/pos);
                    ans=pos*pow(2,c);
                    break;
                }
                y=y/2;
                c++;
            }
            }
            ans=ans+(p/2);
            }
            printf("%llu\n",ans);
    }
    return 0;
}
