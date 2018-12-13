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
        int r[n];
        int fg=0;
        int f[n];
        int max;
        int c[n];
        int ch[1000000]={0};
        for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
           b[a[i]]++;
           if(b[a[i]]==2)
            {
            r[fg++]=a[i];
            ch[a[i]]=2;
            }
            f[i]=0;
        }
        int count=0;
        if(fg==0)
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
               if(a[l]!=r[g] && f[l]==0 && b[a[l]]==1 && ch[a[l]]!=2 )
               {
                   c[l]=r[g];f[l]=1;b[r[g]]--;
                   for(int w=l+1;w<n;w++)
                   {
                       if(a[w]!=r[g] && f[w]==0  && b[a[w]]==1 && ch[a[w]]!=2 && a[l]!=a[w])
                       {c[w]=r[g];f[w]=1;b[r[g]]--;break;}
                   }
                    break;
               }
           }
        }
        for(int g=0;g<fg;g++)
        {
          if(b[r[g]]==2)
           {for(int l=0;l<n;l++)
           {
               if(a[l]!=r[g] && f[l]==0)
               {
                    c[l]=r[g];f[l]=1;b[r[g]]--;
                   for(int w=l+1;w<n;w++)
                   {
                       if(a[w]!=r[g] && f[w]==0 && a[l]!=a[w])
                       {c[w]=r[g];f[w]=1;b[r[g]]--;break;}
                   }
                    break;
               }
           }
           }
        }
        for(int d=0;d<n;d++)
        {
            if(b[a[d]]==1)
            {int pro=0;
                for(int l=0;l<n;l++)
                {if(f[l]==0 && a[l]!=a[d])
                {
                    f[l]=1;c[l]=a[d];pro=1;
                    b[a[d]]--;
                    break;
                }
                }
            if(pro==0 && f[d]==0)
               { c[d]=a[d];
               }
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
