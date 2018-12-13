#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        long int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=2)
                sum+=2;
            else
            {
                sum=-1;break;
            }
        }
        printf("%ld\n",sum);
    }
    return 0;
}
