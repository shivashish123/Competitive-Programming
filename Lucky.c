#include<stdio.h>
int main()
{
    long int test,i;
    scanf("%ld",&test);
    for(i=0;i<test;i++)
    {
        long int n;
        scanf("%ld",&n);
        int count=0;
        while(n>0)
        {
            int k=n%10;
            if(k==4)
                count++;
            n=n/10;
        }
        printf("%d",count);
    }
    return 0;
}
