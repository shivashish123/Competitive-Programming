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
        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        long int s=pow(2,n);
        long int sum;
        int fl=0;
        for(long int i=1;i<s;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))==(1<<j))
                    sum+=a[j];
            }
            if(sum==m)
            {
                fl=1;break;
            }
        }
        if(fl==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
