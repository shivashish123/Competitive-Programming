#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        long long int b[n];
        b[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            if( (a[i]>0 && a[i+1]<0) || (a[i]<0 && a[i+1]>0) )
            b[i]=b[i+1]+1;
            else
            b[i]=1;
        }
        for(int i=0;i<n;i++)
        printf("%d ",b[i]);
        printf("\n");
    }
    return 0;
}
