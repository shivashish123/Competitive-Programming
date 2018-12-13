#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        char a[n][m+3];
        for(int i=0;i<n;i++)
            scanf("%s",a[i]);
        int l=1;
        long int count=0;
        while(l<n && l<m)
        {
            for(int i=0;(i+l)<n;i++)
            {
                for(int j=0;(j+l)<m;j++)
                {
                    if((a[i][j]==a[i+l][j])&&(a[i][j]==a[i+l][j+l])&&(a[i][j]==a[i][j+l]))
                        count++;
                }
            }
            l++;
        }
        printf("%ld\n",count);
    }
}
