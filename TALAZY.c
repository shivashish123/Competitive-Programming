#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long int n,b,m;
        scanf("%ld%ld%ld",&n,&b,&m);
        long long int time=0;
        while(n>1)
        {
            int w=(n+1)/2;
            time+=w*m;
            m=m*2;
            n=n-w;
        }
        time+=m;
        printf("%lld\n",time);
    }
    return 0;
}
