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
        int ans[n];
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&a[i])
            if(i==0 || i==n-1)
                ans[i]=1;
            else
                ans[i]=2;
        }
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        for(int i=0;i<n;i++)
        {
            int l=i-1;
            int k=i+1;
            long int s1=a[l];
            long int s2=a[k];
            while(l>=1)
            {
                if(s1<=a[i])
                    ans[l-1]++;
                else
                    break;
                l--;
                s1+=a[l]
            }
            while(k<(n-1))
            {
                if(s2<=a[i])
                    ans[k+1]++;
                else
                    break;
                k++;
                s2+=a[k]
            }
        }
        for(int i=0;i<n;i++)
            printf("%d ",ans[i]);
        printf("\n");
    }
    return 0;
}
