#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        long int a[n][m];
        long int max;
        int flag=0;
        int steps=0;
        for(int u=0;u<n;u++)
        {
            for(int y=0;y<m;y++)
            {
                scanf("%ld",&a[u][y]);
            if(u==0 && y==0)
                max=a[u][y];
            else if(a[u][y]>max)
            {
                flag=0;max=a[u][y];
            }
            else if(a[u][y]==max)
            {
                flag++;
            }
            }
        }
        if(flag==0)
            steps=1;
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(a[i][j]==max)
                    {
                        steps++;
                        if(i+1<n)
                        a[i+1][j]=0;
                        if(i>0)
                        a[i-1][j]=0;
                        if(j>0)
                        a[i][j-1]=0;
                        if(j+1<m)
                         a[i][j+1]=0;
                    }
                }
            }
        }
        printf("%d\n",steps);
    }
    return 0;
}
