#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,m,c;
        scanf("%d%d%d",&n,&m,&c);
        int count=0;
        for(int j=1;j<=c;j++)
        {
            if(c%j==0)
            {
            factor1=j;
            factor2=c/j;
            if(factor1<=n && factor2<=m)
            count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
