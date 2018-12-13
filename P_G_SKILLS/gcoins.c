#include<stdio.h>
long int ret(long int x,long int a[])
{

    if(a[x/2]==-1)
    a[x/2]=ret(x/2,a);
    if(a[x/2]<(x/2))
    a[x/2]=x/2;
    else if(a[x/3]==-1)
    a[x/3]=ret(x/3,a);
    if(a[x/3]<(x/3))
    a[x/3]=x/3;
    else if(a[x/4]==-1)
    a[x/4]=ret(x/4,a);
    if(a[x/4]<(x/4))
    a[x/4]=x/4;
    a[x]=a[x/2]+a[x/3]+a[x/4];
    if(x!=0 && x!=1 && x!=2)
    return a[x];
    else
     return x;
}
int main()
{
    long int n;
    scanf("%ld",&n);
    long int a[n+1];
    for(long int j=0;j<=n;j++)
    {
      if(j==0)
        a[j]=0;
      else if(j==1)
        a[j]=1;
      else if(j==2)
        a[j]=2;
      else
        a[j]=-1;
    }
    long int z=ret(n,a);
    printf("%ld\n",z);
    return 0;
}
