#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int sum=0,k=1;
        while(sum<=n)
        {
            sum+=k;
            k++;
        }
        printf("%d\n",k-2);
    }
    return 0;
}
