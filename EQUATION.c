#include<stdio.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,c;
        scanf("%d%d%d%d",&n,&a,&b,&c);
        long int sum=0;
        for(int i=0;i<=a;i++)
        {
            for(int j=0;j<=b;j++)
            {
                if(i+j<=n)
                {
                   sum+=min(c+1,n-i-j+1);
                }
            }
        }
        printf("%ld\n",sum);
    }
    return 0;
}
