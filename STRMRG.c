#include<stdio.h>
int max(int a, int b)
{
    return (a > b)? a : b;
}
int lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        char a[n+2];
        char b[m+2];
        scanf("%s%s",a,b);
        char h[n+m+3];
        char g[n+m+3];
        int l=0,k=0;
        char x[5003],y[5003];
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
                x[l++]=a[i];
        }
        if(a[n-1]!=a[n-2])
            x[l++]=a[n-1];
        for(int i=0;i<m-1;i++)
        {
            if(b[i]!=b[i+1])
                y[k++]=b[i];
        }
        if(b[m-1]!=b[m-2])
            y[k++]=b[m-1];
        int r=lcs(x,y,l,k);
        printf("%d",(l+k-r));
    }
    return 0;
}
