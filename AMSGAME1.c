#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[n];
        int z;
        for(int j=0;j<n;j++)
        {

            scanf("%ld",&a[j]);
            if(j==0)
                z=a[j];
            else
                z=gcd(z,a[j]);
        }
        printf("%d\n",z);
    }
    return 0;
}
