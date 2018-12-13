#include<stdio.h>
long int gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        if(a<b)
        {
            long long int t=a;
            a=b;
            b=t;
        }
        long int hcf=gcd(a,b);
        long long int lcm=(a*b)/hcf;
        printf("%ld %lld\n",hcf,lcm);
    }
    return 0;
}
