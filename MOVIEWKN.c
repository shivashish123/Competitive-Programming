#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int a[2][n];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        int m=a[0][0]*a[1][0];
        int pos=1;
        int rc=a[1][0];
        for(int j=1;j<n;j++)
        {
         int tem=a[0][j]*a[1][j];
         if(m<tem)
         {
             m=tem;
             pos=j+1;
             rc=a[1][j];
         }
         else if(m==tem)
         {
             if(a[1][j]>rc)
             {
                 pos=j+1;
                 rc=a[1][j];
             }
         }
        }
        printf("%d\n",pos);
    }
    return 0;
}
