#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        int z=2048;
        int count=0;
        int r=n%z;
        count+=n/z;
        z=z/2;
        n=r;
        while(r>0)
        {
         r=n%z;
         count+=n/z;
         z=z/2;
         n=r;
        }
        printf("%d\n",count);
    }
return 0;
}
