#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,mod;
        scanf("%d",&n);
        mod=n%9;
        printf("%d\n",mod+1);
    }
    return 0;
}
