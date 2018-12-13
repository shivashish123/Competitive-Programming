#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n+3][n+3];
        int h[n][n];
        int v[n][n];
        long int sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }
          for(int i=n-1;i>=0;i--)
            {
                for(int j=n-1;j>=0;j--)
                {
                    if((i==n-1)&& (a[i][j]=='.'))
                        v[i][j]=1;
                    else if(i==n-1)
                        v[i][j]=0;
                    else if((a[i][j]=='.') && (v[i+1][j]==1))
                        v[i][j]=1;
                    else
                        v[i][j]=0;
                }
            }
                for(int i=n-1;i>=0;i--)
                {
                for(int j=n-1;j>=0;j--)
                {
                    if((i==n-1)&& (a[j][i]=='.'))
                        h[j][i]=1;
                    else if(i==n-1)
                        h[j][i]=0;
                    else if((a[j][i]=='.') && (h[j][i+1]==1))
                        h[j][i]=1;
                    else
                        h[j][i]=0;
                }
                }

         for(int i=n-1;i>=0;i--)
            {
                for(int j=n-1;j>=0;j--)
                {
                    if(v[i][j]==1 && h[i][j]==1)
                        sum++;
                }

            }
        printf("%ld\n",sum);
    }
    return 0;
}
