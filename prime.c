#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int n;
    scanf("%lld\n",&n);
    long long int count=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if((n%i)==0)
        {count++;
        if(i!=sqrt(n))
            count++;
        }
    }
    printf("%lld\n",count);
    }
    return 0;
}
