#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long int c,d,l;
    scanf("%ld%ld%ld",&c,&d,&l);
    long int min,max=4*(c+d);
    if(c>2*d)
        min=(c-d)*4;
    else
        min=d*4;
    if((l%4)==0 && l>=min && l<=max)
        printf("yes\n");
    else
        printf("no\n");
    }
    return 0;
}
