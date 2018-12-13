#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a[4];
        for(int i=0;i<4;i++)
            scanf("%ld",&a[i]);
        long int sum=0;
        int fl=0;
        for(int i=1;i<16;i++)
        {
            sum=0;
            for(int j=0;j<4;j++)
            {
                if(i&(1<<j)==(1<<j))
                    sum+=a[j];
            }
            if(sum==0)
                {
                    fl=1;break;
                }
        }
        if(fl==1)
            printf("Yes\n");
        else
            printf("NO\n");
    }
    return 0;
}
