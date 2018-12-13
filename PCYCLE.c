#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int f[n];
    int a[n];
    int b[100000];
    for(int x=0;x<n;x++)
    {
        scanf("%d",&a[x]);
        f[x]=0;
    }
    int l=0;
    int count=0;
    for(int h=0;h<n;h++)
    {
        if(f[h]==0)
        {
            int t=h+1;
            f[h]=1;
            b[l++]=t;
            int k=a[h];
            while((k)!=t)
            {
                f[k-1]=1;
                b[l++]=k;
                k=a[k-1];
            }
            b[l++]=t;
            b[l++]=0;
            count++;
        }
    }
    printf("%d\n",count);
    for(int z=0;z<l-1;z++)
    {
      if(b[z]==0)
            printf("\n");
      else
        printf("%d ",b[z]);
    }
    return 0;
}
