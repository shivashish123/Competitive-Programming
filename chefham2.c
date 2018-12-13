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
        int fg=0;
        int f[n];
        int max;
        int c[n];
        for(int i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
           b[a[i]]++;
           if(b[a[i]]==2)
            fg++;
            f[i]=0;
            if(i==0)
                max=a[i];
            else if(max<a[i])
                max=a[i];
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
        else if(n<=4)
        {
        c[0]=a[n-2];
        c[1]=a[n-1];
        for(int k=2;k<n;k++)
        {
                    c[k]=a[k-2];
        }
        for(int i=0;i<n-2;i++)
        {
            if(a[i]==c[i])
            {
                int tem=c[i];c[i]=c[i+1];c[i+1]=tem;
            }
        }
        if(a[n-1]==c[n-1])
        {
            int tem=c[n-1];c[n-1]=c[n-2];c[n-2]=tem;
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
