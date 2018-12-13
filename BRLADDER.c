#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long int x,y;
        scanf("%ld%ld",&x,&y);
        if(x<y)
        {
            int tem=x;x=y;y=tem;
        }
        long int l=x/2;
        long int k=y/2;
        if((l==k && (x-y)==1)
            printf("YES\n");
        else if(x%2==0 && y%2==0 && x-y==2)
            printf("YES\n");
        else if(x%2==1 && y%2==1 && x-y==2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
