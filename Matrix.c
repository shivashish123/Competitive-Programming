#include<stdio.h>
int main()
{   int R,C;
    long int h;
    scanf("%d%d",&R,&C);
    scanf("%ld",&h);
int u,f;
    int mat[R][C];
    for(u=0;u<R;u++)
    {
        for(f=0;f<C;f++)
        {
            scanf("%d",&mat[u][f]);
        }
    }
    int i,j,k;
for(k=0;k<h;k++)
{
   int m=R,n=C;
    int row = 0, col = 0;
    int prev, curr;
    while (row < m && col < n)
    {

        if (row + 1 == m || col + 1 == n)
            break;
        prev = mat[row + 1][col];
        for (i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
        for ( i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
        if (row < m)
        {
            for ( i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
        if (col < n)
        {
            for ( i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}
    for(j=0;j<R;j++)
    {
        for(k=0;k<C;k++)
        {
            printf("%d ",mat[j][k]);
        }
        printf("\n");
    }
    return 0;
}
