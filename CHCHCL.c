#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long int n,m;
        scanf("%ld%ld",&n,&m);
        long long int sum=n*m;
        if(sum%2==0)
            printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
