#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,a,b;
        scanf("%ld%ld%ld",&n,&a,&b);
        int x;
        int c=0,d=0;
        while(a>0)
        {
            int k=a%2;
            if(k==1)c++;
            a=a/2;
        }
        while(b>0)
        {
            int k=b%2;
            if(k==1)
                d++;
            b=b/2;
        }
        x=c+d;
        long long int s=0;
        if(x<=n)
        {
            for(int i=n-1;i>=n-x;i--)
                s+=pow(2,i);
        }
        else
        {
            for(int i=x-n;i<n;i++)
                s+=pow(2,i);
        }
        printf("%lld\n",s);
    }
    return 0;
}
