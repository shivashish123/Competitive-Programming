#include<stdio.h>
long int min(long int u,long int v)
{
    if(u<v)
        return u;
    return v;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    long int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            scanf("%ld",&a[i][j]);
    }
    long int ans=-1;
    int fl=0;
    int s=0;
    int flag=0;
    long int mini;
    for(int i=0;i<n;i++)
    {
         mini=a[i][0];
        for(int j=1;j<m;j++)
            mini=min(mini,a[i][j]);
        for(int j=0;j<m;j++)
        {
              fl=0;s=0;
            if(a[i][j]==mini)
            {
              s=1;
                for(int x=0;x<n;x++)
                    {if(a[x][j]>mini)
                    {
                        fl=1;break;
                    }
                    }
            }
            if(fl==0 && s==1)
              {flag=1;break;}
        }
        if(flag==1)
            break;
    }
    if(flag==1)
    printf("%ld\n",mini);
    else
        printf("GUESS\n");
    return 0;
}
