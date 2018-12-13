#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a;
    int sum=0;
    for(int u=0;u<n;u++)
    {
        scanf("%lld",&a);
        sum+=a;
    }
    if(((n*(n+1))/2)==sum)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
