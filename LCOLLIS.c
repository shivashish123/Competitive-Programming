#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
        }
        int sum=0;
        for(int i=0;i<m;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(a[j][i]==1)
                    c++;
            }
            if(c>1)
            {
                int l=c*(c+1)/2;
                sum+=l;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
