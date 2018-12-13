#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&m)
        int b[m];
        for(int i=0;i<m;i++)
            scanf("%d",&b[i]);
        int k=0,j=0;
        int flag=0;
        for(int l=0;l<n;l++)
        {
            if(a[l]==b[j])
            {
                if(j==m-1)
                {
                    flag=1;break;
                }
                j++;
            }
        }
        if(flag==0)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
