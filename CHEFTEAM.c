#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
  if(b==0)
  return a;
  return(b,a%b);
}
long long int nCr(long long int n,long long int r)
{
  if(r==0 || n==r) return 1;
  if(r>n-r)
  r=n-r;
 long long int g=_gcd(r,n-r+1);
    return (nCr(n,r-1)/(r/g))*((n-r+1)/g);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k;
        scanf("%lld%lld",&n,&k);
        if(n<k)
        {printf("0\n");continue;}
        if(k==n)
        {printf("1\n");continue;}
        if(k>n-k)
            k=n-k;
        printf("%lld\n",nCr(n,k));
    }
    return 0;
}
