#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int x,a;
        long long int sum=0;
        scanf("%lld",&x);
        for(int j=1;j<=700;j++)
        {
            a=sqrt(x-j);
            sum+=a;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
