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
        int c[100];
        int d[10];
        int l=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
              {
                 scanf("%d",&a[i][j]);
                 if(a[i][j]==2)
                    {
                        int flag=0;
                        for(int ul=0;ul<l;ul++)
                          {
                            if(c[ul]==i || c[ul]==j)
                            {
                           flag=1;break;
                            }
                          }
                        if(flag==0)
                        {c[l++]=i;c[l++]=j;}
                    }
                else if(a[i][j]==3)
                {
                    d[0]=i;d[1]=j;
                }
              }
        }
        int b[10][10]={{2,4},{2,4},{2,4,3,6},{2,4,3,6},{2,3,6},{2,3,6,9},{2,3,6,9,5,10}};
        int z[10][10]={{1,3},{1,3,5},{1,5},{1,5,7},{1,5,7},{1,5,7},{1,7}};
        if(n<=3)
        {
            for(int i=0;i<n;i++)
                printf("%d\n",i+1);
        }
        int ans[10]={-1};
        int r=0;
        else
        {
            for(int x=0;x<l;x++)
                {
                ans[c[x]]=b[n-4][r++];
                }
            r=0;
            if(n>=8)
            {
                ans[d[0]]=4;
                ans[d[1]]=8;
            }
            for(int i=0;i<n;i++)
            {
                if(ans[i]==-1)
                    ans[i]=z[n-4][r++];
            }
            for(int i=0;i<n;i++)
                printf("%d\n",ans[i]);
        }
    }
    return 0;
}
