#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n][2];
        for(int y=0;y<n;y++)
        {
            scanf("%d%d",&a[y][0],&a[y][1]);
        }
        for(int y=0;y<n;y++)
        {
            if(a[y][0]<=k)
            {
                k=k-a[y][0];
                a[y][0]=0;
            }
            else
            {
               a[y][0]=a[y][0]-k;
                k=0;
            }
        }
        int sum=0;
        for(int y=0;y<n;y++)
        {
            sum+=a[y][0]*a[y][1];
        }
        printf("%d\n",sum);
    }
    return 0;
}
