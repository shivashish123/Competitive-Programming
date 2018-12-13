#include<stdio.h>
 long long int a[1000001];
    long long int b[1000001];
int main()
{
    int t,n;
    for(int i=1;i<=1000000;i++)
        a[i]=i;
    b[1]=0;
    for(int i=2;i<=1000000;i++)
    {
      if(a[i]==i)
        {
        for(int j=i;j<=1000000;j=j+i)
        {
            a[j]=a[j]-(a[j]/i);
        }
        }
        b[i]=b[i-1]+a[i];
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",b[n]);
    }
    return 0;
}
