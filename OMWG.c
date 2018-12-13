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
         {
             a[i][j]=0;
         }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
          {
              a[i][j]=1;
              if(a[i-1][j]==1 && i>0)
                count++;
              if(a[i+1][j]==1 && i<n-1)
                count++;
                if(a[i][j-1]==1 && j>0)
                count++;
                if(a[i][j+1]==1 && j<m-1)
                count++;
          }
        }
        printf("%d\n",count);
    }
    return 0;
}
