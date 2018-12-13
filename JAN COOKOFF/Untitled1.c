#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int k;
        int c,d;
        scanf("%lld%d%d",&k,&c,&d);
        int g=(c+d)%10;
        int r=(2*g)%10;
        int h=(4*g)%10;
        int u=(6*g)%10;
        int o=(8*g)%10;
        long long int sum =r+h+u+o;
        long long int d=((k-3)/4)%3;
        if(k==2 && ((c+d)%3)==0)
        {

            printf("YES\n");
            continue;

        }
        else if(k==3 && (g+c+d)%3==0)
            {printf("YES\n");
            continue;
            }
        sum=sum%3;
        d=(d*sum)%3;
        if((k-3)%4==1)
            d=(d+r)%3;
        else if((k-3)%4==2)
            d=(d+r+o)%3;
        else if((k-3)%4==3)
            d=(d+r+o+u)%3;
        long long int l=(g+(c+d))%3;
        l=(l+d)%3;
        if(l==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
