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
        for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
           b[a[i]]++;
           if(b[a[i]]==2)
            {
            r[fg++]=a[i];
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
        for(int y=0;y<n;y++)
        {
            int flag=0;
            for(int l=0;l<n;l++)
            {
               if(a[y]!=a[l] && f[l]==0)
               {
                   c[l]=a[y];f[y]=1;flag=1;break;
               }
            }
            if(flag==0)
            {
                c[y]=a[y];f[y]=1;
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
