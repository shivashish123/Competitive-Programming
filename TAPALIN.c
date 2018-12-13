#include<stdio.h>
#define mod 1000000007
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        long long int sum=0;
        long int pro=1;
        for(int i=0;i<=(n/2);i++)
        {
            pro=((pro*26)%mod);
            sum+=pro;
        }
        sum=sum%mod;
        printf("%lld\n",sum);
    }
}
