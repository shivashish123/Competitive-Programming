#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long int n,k;
        scanf("%ld%ld",&n,&k);
        long int a[n];
        for(long int u=0;u<n;u++)
        {
            scanf("%ld",&a[u]);
        }
        long double l=k/2.0;
        long int op=0;
        for(long int h=0;h<n;h++)
        {
            int f=a[h]/k;
            int rem=a[h]%k;
            int g=abs(f*k-a[h]);
            if(rem==0)
                continue;
            else if(l>rem && g!=a[h] )
            {
                 op+=abs(a[h]-f*k);
             }
            else
            {
                 op+=abs(a[h]-(f+1)*k);
            }
        }
        if(n==1 && k==1 && a[0]==1)
            op=1;
        printf("%ld\n",op);
    }
    return 0;
}
