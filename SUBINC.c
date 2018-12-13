#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int u=0;u<n;u++)
            scanf("%d",&a[u]);
        int arr[n];
        memset(arr,1,sizeof(arr));
        int m,max;
        for(int r=1;r<n;r++)
        {
            m=0;
            for(int x=0;x<r;x++)
            {
                if(a[x]<=a[r])
                {
                    if(m<arr[x])
                        m=arr[x];
                }
            }
            arr[r]+=m;
        }
        max=arr[0];
        for(int i=1;i<n;i++)
        {
                max+=arr[i];
        }
        printf("%d\n",max);
    }
    return 0;
}
