#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n][n];
        int b[n][3];
        int c[n][3];
        int check[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);
            b[i][0]=0;
            b[i][1]=0;
            b[i][2]=0;
            c[i][0]=0;
            c[i][1]=0;
            c[i][2]=0;
            check[i]=-1;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(j!=i)
                {
                    int count=0;
                    for(int k=1;k<=n;k++)
                    {
                        if(i%k==0 &&  j%k==0)
                            count++;
                    }
                    b[i-1][count-1]++;
                }
            }
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
                c[i][0]++;
            else if(a[i][j]==2)
                c[i][1]++;
            else if(a[i][j]==3)
                c[i][2]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=2;j++)
        {
          printf("%d**%d\n",b[i][j],c[i][j]);
        }
    }
    int ans[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(check[j]==-1)
            {
               if(c[i][0]==b[j][0] && c[i][1]==b[j][1] && c[i][2]==b[j][2] )
                {
                ans[i]=j+1;
                check[j]=1;
                }
            }

        }
    }
    for(int i=0;i<n;i++)
        printf("%d\n",ans[i]);
    }
    return 0;
}
