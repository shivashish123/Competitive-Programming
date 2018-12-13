#include<stdio.h>
#define mod 1000000007
long int po(int x)
{
    if(x==0)
        return 1;
    long int r=po(x/2);
    long int ret=(r*r)%mod;
    if(x%2)
        ret=(ret*2)%mod;
    return ret;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        long int j=po(n);
        printf("%ld\n",j-1);
    }
    return 0;
}
