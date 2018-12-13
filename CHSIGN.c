#include<bits/stdc++.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        long int b[n];
        int i=0;
        long long int sum=0;
        while(i<n)
        {
            if(i==0 && a[i]<a[i+1])
            {
                b[i]=-a[i];
                b[i+1]=a[i+1];
                sum=a[i+1]-a[i];
                i++;
            }
            else if(i==n-1 && a[i]<a[i-1])
            {
                if(sum>a[i])
                    b[i]=-a[i];
                else
                    b[i]=a[i];
            }
            else if(a[i]<a[i+1] && a[i]<a[i-1])
            {
                if(sum>a[i])
                    {b[i]=-a[i];
                    b[i+1]=a[i+1];
                    sum=a[i+1]-a[i];
                    i++;
                    }
                else
                {
                    b[i]=a[i];
                    sum+=a[i];
                }
            }
            else
                {
                b[i]=a[i];
                sum+=a[i];
                }
            i++;
        }
        for(int j=0;j<n;j++)
            printf("%ld ",b[j]);
        printf("\n");
    }
}
