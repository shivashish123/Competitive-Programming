#include<stdio.h>
#include<math.h>
long int cmp(const void *a,const void *b)
{
    return(*(long int*)a-*(long int*)b);
}
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n],b[n];
    long long int x;
    int u=0;
    long long int s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        if(a[i]<0)
        {s+=fabs(a[i]);
        b[u++]=a[i];
        }
    }
    scanf("%lld",&x);
    if(x==0)
    {printf("0\n");return 0;
    }
    qsort(b,u,sizeof(long int),cmp);
    if(x>=s)
    {
        printf("%lld\n",s);return 0;
    }
    long long int minimum=s;
    long long int r;
    long long int v=0;
    for(int i=u-1;i>=0;i--)
    {
       r=fabs(b[i])*x+v;
       if(r<minimum)
        minimum=r;
       v+=(fabs(b[i]-b[i-1]))*(u-i);
    }
    printf("%lld\n",minimum);
    return 0;
}
