#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        long int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                scanf("%ld",&a[i][j]);
        }
        if(n==1 && m==1)
        {
            if(a[0][0]==-1)
            printf("2\n");
            else
            printf("%ld\n",a[0][0]);
            continue;
        }
        int fl=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]!=-1 && j>0 && i>0)
                {
                    if(a[i][j-1]>a[i][j]  || a[i-1][j]>a[i][j])
                    {fl=1;
                    break;
                    }
                }
                else if(a[i][j]!=-1 && j==0 && i>0)
                {
                    if(a[i-1][j]>a[i][j])
                    {
                        fl=1;break;
                    }
                }
                else if(a[i][j]!=-1 && i==0 && j>0)
                {
                    if(a[i][j-1]>a[i][j])
                    {
                        fl=1;break;
                    }
                }
                else if(a[i][j]==-1)
                {
                    if(j>0 && i>0)
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                    else if(j==0 && i>0)
                    a[i][j]=a[i-1][j];
                    else if(i==0 && j>0)
                    a[i][j]=a[i][j-1];
                    else if(i==0 && j==0)
                    a[i][j]=1;
                }
            }
        }
        if(fl==1)
            printf("-1\n");
        else
        {
           for(int i=0;i<n;i++)
            {
            for(int j=0;j<m;j++)
                printf("%ld ",a[i][j]);
            printf("\n");
            }
        }
    }
    return 0;
}

