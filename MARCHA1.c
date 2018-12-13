#include<stdio.h>
#include<math.h>
int main()
{
int t;
scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        long int p=pow(2,n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int flag=0;
        for(long int i=1;i<p;i++)
        {
            long int sum=0;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))==(1<<j))
                    sum+=a[j];
            }
            if(sum==m)
            {
                flag=1;break;
            }
        }
        if(flag==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
