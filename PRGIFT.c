#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int x;
        int count=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x%2==0)
                count++;
        }
        if(k==0 && count==n)
            printf("NO\n");
        else if(count>=k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
