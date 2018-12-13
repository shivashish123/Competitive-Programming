#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    long long int c=0;
    for(int i=1;i<=a;i++)
    {
        int j=i+1;
        while((j*j-i*i)<=b &&(j*j-i*i)>=1)
            c++;
    }
    printf("%lld\n",c);
    return 0;
}
