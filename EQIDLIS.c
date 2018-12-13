#include<stdio.h>
#include<math.h>
void update(int t[],int a[],int n)
{
    for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                t[0]=a[i];t[1]=a[i];t[2]=0;t[3]=0;
            }
            if(t[0]<a[i])
                {t[0]=a[i];
                t[2]=i;}
            if(t[1]>a[i])
                {t[1]=a[i];
                t[3]=i;
                }

        }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        long long int s=0;
        int count=0;
        int t[4];
        for(int i=0;i<n;i++)
            {scanf("%d",&a[i]);
            if(i==0)
            {
                t[0]=a[i];t[1]=a[i];t[2]=0;t[3]=0;
            }
            if(t[0]<a[i])
                {t[0]=a[i];
                t[2]=i;}
            if(t[1]>a[i])
                {t[1]=a[i];
                t[3]=i;
                }
            s+=a[i];
            }
        int avg=s/n;
        if((s%n)!=0)
           {
              printf("-1\n");
              continue;
           }
        while(t[0]!=t[1] && t[1]!=avg)
        {
            int r=ceil((t[0]-t[1])/2);
            a[t[2]]-=r;
            a[t[3]]+=r;
            update(t,a,n);
            count++;
        }
            printf("%d\n",count);
    }
    return 0;
}
