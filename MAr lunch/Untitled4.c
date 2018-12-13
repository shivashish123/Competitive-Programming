#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        long long int d=b-a;
        long long int e=c-b;
        long long int q=abs(d-e);
        long long int u=ceil(q*1.0/2.0);
        printf("%lld\n",u);
    }
}
