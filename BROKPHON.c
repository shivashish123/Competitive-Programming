#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[n];
        long int b[n];
        for(int j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
            b[j]=0;
        }
        for(int j=0;j<n-1;j++)
        {
            if(a[j]!=a[j+1])
            {b[j]=1;b[j+1]=1;
        }
        }
        int sum=0;
        for(int x=0;x<n;x++)
            if(b[x]==1)
                sum++;
        printf("%d\n",sum);
    }
    return 0;
}
