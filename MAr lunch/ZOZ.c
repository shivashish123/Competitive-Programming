#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,k;
        scanf("%ld%ld",&n,&k);
        long int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            sum+=a[i];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            long long int y=2*a[i]+k;
            if(y>sum)
                count++;
        }
        printf("%d\n",count);

    }
    return 0;
}
