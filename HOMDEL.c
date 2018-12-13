#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
            }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(b[j][k]>(b[i][j]+b[j][k]))
                    b[j][k]=b[i][j]+b[j][k];
            }
        }
    }
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int s,g,d;
        scanf("%d%d%d",&s,&g,&d);
        int dis=b[s][g]+b[g][d];
        int small=b[s][d];
        printf("%d %d\n",dis,(dis-small));
    }
    return 0;
}
