#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",n);
        int x=n;
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=i+1;
        while(x--)
        {
            printf("%d\n",n);
            for(int i=0;i<n;i++)
            {
                printf("%d %d %d",i+1,a[i],a[i]+1);
                a[i]++;
                if(a[i]>n)
                    a[i]=1;
            }
        }
    }
    return 0;
}
