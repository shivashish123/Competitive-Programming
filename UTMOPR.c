#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long int n,k;
        scanf("%ld%ld",&n,&k);
        long int a[n];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            sum+=a[i];
        }
            if(k>1 || (k==1 && sum%2==1))
            printf("even\n");
            else
                printf("odd\n");
    }
    return 0;
}
