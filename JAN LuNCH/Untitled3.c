#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n][m];
        char b[n][m];
        memset(b,'*',sizeof(b));
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    scanf("%d",&a[i][j])
                    if(a[i][j]==-1)
                        b[i][j]='B';
                }
            }

        int l=0;
            for(int j=0;j<m;j++)
            {
                if(a[l][j]>0)
                {
                    for(int g=0;g<n;g++)
                    {
                        for(int h=0;h<m;h++)
                        {
                            if((abs(l-g)+abs(j-h))<=a[l][j])
                                b[g][h]='Y';
                        }
                    }
                }
            }
        l=n-1;
            for(int j=0;j<m;j++)
            {
                if(a[l][j]>0)
                {
                    for(int g=0;g<n;g++)
                    {
                        for(int h=0;h<m;h++)
                        {
                            if((abs(l-g)+abs(j-h))<=a[l][j])
                                b[g][h]='Y';
                        }
                    }
                }
            }
        int r=0;
            for(int j=0;j<n;j++)
            {
                if(b[r])

            }
    }
    return 0;
}
