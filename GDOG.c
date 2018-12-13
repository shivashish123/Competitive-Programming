#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int rem=0;
        for(int i=2;i<=k;i++)
        {
            int f=n%i;
            if(f>rem)
                rem=f;
        }
        printf("%d\n",rem);
    }
    return 0;
}
