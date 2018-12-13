#include<stdio.h>
int ret(long int x)
{
    int even=0,odd=0;
    while(x>0)
    {
        if((x%10)&1)
            odd+=x%10;
        else
            even+=x%10;
        x=x/10;
    }
    return fabs(even-odd);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int dif=0;
        for(int j=2;j<=n;j++)
        {
            dif+=fabs(j)*(j-1);
        }
        for(int j=n+1;j<=2*n;j++)
        {
            dif+=fabs(j)*(2*n-j+1);
        }
        printf("%lld\n",dif);
    }
    return 0;
}
