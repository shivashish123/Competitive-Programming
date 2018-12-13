#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int sum;
    while(t--)
    {
        sum=0;
        long int n,i;
        scanf("%ld",&n);
        for(i=1;(i*i)<=n;i++)
        {
            if((n%i)==0)
            {
                sum+=i;
                if((n/i)!=i)
                    sum+=n/i;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
