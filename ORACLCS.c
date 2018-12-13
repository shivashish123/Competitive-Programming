#include<stdio.h>
#include<string.h>
int cmp(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n][10000];
        for(int i=0;i<n;i++)
            scanf("%s",a[i]);
        int b[2*n];
        memset(b,0,sizeof(b));
        int m=strlen(a[0]);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='a')
                    b[i]++;
                else
                    b[2*i+1]++;
            }
        }
        qsort(b,2*n,sizeof(int),cmp);
        printf("%d\n",b[0]);
    }
}
