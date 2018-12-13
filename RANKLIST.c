#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        long long int s;
        scanf("%lld%lld",&n,&s);
        int count=0;
        if(s==((n*(n+1)/2)))
            printf("0\n");
        else
        {
            for(int i=1;i<=n;i--)
            {
                if(s>=i && s>=n)
                {
                    s=s-i;
                    count++;
                }
            }
            printf("%d\n",(n-count));
        }
    }
    return 0;
}
