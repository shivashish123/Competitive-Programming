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
        printf("%ld\n",((2*n)%mod))
    }
    return 0;
}
