#include<stdio.h>
int main()
{
    long int n,m;
    scanf("%ld%ld",&n,&m);
    while(m--)
    {
         long int x;
         scanf("%ld",&x);
        long int y=1+2*n;
        long int dif;
        if(y>x)
            dif=y-x;
        else
            dif=x-y;
        printf("%ld\n",n-dif);
    }
    return 0;
}
