#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int c=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int x=0;x<n-2;x++)
        {
            for(int y=x+2;y<n;y++)
            {
                if(a[y]<a[x])
                {
                    c=1;break;
                }
            }
            if(c==1)
                break;
        }
         if(c==1)
                printf("NO\n");
         else
            printf("YES\n");
    }
    return 0;
}
