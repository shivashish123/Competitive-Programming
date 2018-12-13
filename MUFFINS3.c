#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long int n;
        scanf("%ld",&n);
        int rem;
        long int pr=n;
        int min=0;
        int h=n/2+1;
            rem=n%h;
            if(rem>min)
            {
                pr=h;
        }
        printf("%ld\n",pr);
    }
    return 0;
}
