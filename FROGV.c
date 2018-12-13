#include<stdio.h>
long int cmp(const void *a,const void *b)
{
    return(*(long int*)a-*(long int*)b);
}
int main()
{
    long int n,k,p;
    scanf("%ld%ld%ld",&n,&k,&p);
    long int a[n];
    long int b[n];
    long int c[n];
    int l=0;
    for(int i=0;i<n;i++)
        {scanf("%ld",&a[i]);
        c[i]=a[i];
        }
    qsort(a,n,sizeof(long int),cmp);
    for(int h=0;h<n;h++)
    {
        if(h==0)
          {
            if(((a[h+1]-a[h])>k) && a[h+1]!=a[h])
                b[l++]=a[h];
          }
        else if(h==n-1)
          {
            if(((a[h]-a[h-1])>k)&&a[h]!=a[h-1])
                b[l++]=a[h];
          }
        else if(a[h]!=a[h+1] && a[h]!=a[h-1])
        {
            if(((a[h]-a[h-1])>k) &&((a[h+1]-a[h])>k))
                    b[l++]=a[h];
        }
        else if(a[h]!=a[h+1])
        {
            if((a[h+1]-a[h])>k)
                b[l++]=a[h];
        }
        else if(a[h]!=a[h-1])
        {
            if((a[h]-a[h-1])>k)
                b[l++]=a[h];
        }
    }
    while(p--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int fl=0;
        for(int i=0;i<l;i++)
        {
            if((b[i]==c[x-1])||(b[i]==c[y-1]))
            {
                fl=1;break;
            }
        }
        if(fl==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
