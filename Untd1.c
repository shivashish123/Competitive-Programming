#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int b[1000000]={0};
        int du=0;
        int r[n];
        int fg=0;
        int f[n];
        int max;
        for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
           if(i==0)
            max=a[i];
           else if(max<a[i])
            max=a[i];
           b[a[i]]++;
           if(b[a[i]]==2)
            {du++;
            r[fg++]=a[i];
            }
            f[i]=0;
        }
        int c[n];
        int count=0;
        if(du==0)
        {
            for(int g=0;g<n-1;g++)
            {c[g]=a[g+1];
            }
            c[n-1]=a[0];
            if(n!=1)
            count=n;
            else
            count=0;
        }
        else
        {
        for(int g=0;g<fg;g++)
        {
           for(int l=0;l<n;l++)
           {
               int f1=0;
               if(a[l]!=r[g] && f[l]==0 && b[a[l]]==1)
               {
                   f1=1;c[l]=r[g];f[l]=1;b[r[g]]--;
                    break;
               }
           }
        }
        for(int x=0;x<fg;x++)
        {
            if(b[r[x]]==2)
            {for(int l=0;l<n;l++)
            {

              if(a[l]==r[x] && f[l]==0)
              {
                  f[l]=1;c[l]=a[l];
                  b[r[x]]--;
                  if(b[r[x]]==0)break;
              }

            }}
        }
        for(int d=0;d<n;d++)
        {
            if(b[a[d]]==1)
            {int pro=0;
                for(int l=0;l<n;l++)
                {if(f[l]==0 && a[l]!=a[d])
                {
                    f[l]=1;c[l]=a[d];pro=1;
                    break;
                }
            }
            if(pro==0)
                c[d]=a[d];
        }
        }
        for(int z=0;z<n;z++)
        {
            if(a[z]!=c[z])
                count++;
        }
        }
        printf("%d\n",count);
        for(int d=0;d<n;d++)
            printf("%d ",c[d]);
        printf("\n");
    }
    return 0;
}
