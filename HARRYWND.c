#include<bits/stdc++.h>
using namespace std;
long long int max1[10001];
long long int min1[10001];
int main()
{
int n,k;
memset(max1,-1,sizeof(max1));
memset(min1,-1,sizeof(min1));
scanf("%d%d",&n,&k);
int a[k];
for(int i=0;i<k;i++)
    scanf("%d",&a[i]);
sort(a,a+k);
for(int i=0;i<k;i++)
{
    int j=1;
    while((i*j)<=10000)
    {
        if((max1[a[i]*j])==-1)
        {
           max1[a[i]*j]=j;
        }
        j++;
    }
}
for(int i=k-1;i>=0;i--)
{
    int j=1;
    while((a[i]*j)<=10000)
    {
        if((min1[a[i]*j])==-1)
        {
           min1[a[i]*j]=j;
        }
        j++;
    }
}
if(min1[n]!=-1 && max1[n]!=-1)
{
    printf("%lld %lld\n",max1[n],min1[n]);
    return 0;
}
for(int i=1;i<=n;i++)
{
    if(min1[i]==-1)
    {
        for(int j=1;j<=(i/2);j++)
        {
        if(min1[i]==-1)
        {
            if(min1[j]!=-1 && min1[i-j]!=-1)
            {
                min1[i]=min1[i-j]+min1[j];
            }
        }
        else
        {
            if(min1[j]!=-1 && min1[i-j]!=-1)
            {
                int h=min1[i-j]+min1[j];
                if(h<min1[i])
                    min1[i]=h;
            }
        }
        }
    }
      if(max1[i]==-1)
    {
        for(int j=1;j<=(i/2);j++)
        {
        if(max1[i]==-1)
        {
            if(max1[j]!=-1 && max1[i-j]!=-1)
            {
                max1[i]=max1[i-j]+max1[j];
            }
        }
        else
        {
            if(max1[j]!=-1 && max1[i-j]!=-1)
            {
                int h=max1[i-j]+max1[j];
                if(h>max1[i])
                    max1[i]=h;
            }
        }
        }
    }
}
printf("%lld %lld\n",min1[n],max1[n]);
return 0;
}
