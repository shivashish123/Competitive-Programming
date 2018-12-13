#include<stdio.h>
long long int x[1000001];
long long int a[1000001];
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,k;
        scanf("%lld%lld",&n,&k);
        memset(x,0,sizeof(x));
        long long int d;
        long long int b;
        long long int max=0;
        long long int cards=0;
        long long int ans=0;
        for(int i=0;i<n;i++)
            {scanf("%lld",&a[i]);
            if(a[i]>max)
            max=a[i];
            }
        for(int i=0;i<n;i++)
            {scanf("%lld",&d);
            x[a[i]]+=d;
            ans+=a[i]*d;
            cards+=d;
            }
        int j=1;
        int l=max;
        for(int i=0;i<k;i++)
        {scanf("%lld",&b);
          b=cards-b;
          cards=cards-b;
        if(!(i&1))
        {
                    while(j<=1000000 && b>0)
                    {
                      if(x[j]==0)
                      {
                        j++;
                        continue;
                      }
                        if(x[j]>b)
                        {x[j]=x[j]-b;
                        ans-=b*j;
                        b=0;
                        break;
                        }
                        else
                        {
                            b=b-x[j];
                            ans-=x[j]*j;
                            x[j]=0;
                            j++;
                        }
                    }
        }
        else
        {
                    while(l>=1 && b>0)
                    {
                        if(x[l]==0)
                        {
                          l--;
                          continue;
                        }
                        if(x[l]>b)
                        {x[l]=x[l]-b;
                        ans-=b*l;
                        b=0;
                        break;
                        }
                        else
                        {
                            b=b-x[l];
                            ans-=x[l]*l;
                            x[l]=0;
                            l--;
                        }
                    }
        }
        }

        printf("%lld\n",ans);
    }
    return 0;
}
