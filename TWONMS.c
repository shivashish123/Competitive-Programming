#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long int a,b,n;
        scanf("%ld%ld%ld",&a,&b,&n);
        long int z;
        if(n%2==1)
        {
        if((2*a)>b)
            z=(2*a)/b;
        else
            z=b/(2*a);
        }
        else
        {
            if(a>b)
                z=a/b;
            else
                z=b/a;
        }
            printf("%ld\n",z);
    }
    return 0;
}
