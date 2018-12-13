#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter size of array\n");
    scanf("%d%d",&n,&m);
    int **matrix;
    matrix=malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        martix[i]=malloc(sizeof(int)*m);
        int f=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         a[i][j]=f;
         f++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
    free(matrix);
    return 0;
}
