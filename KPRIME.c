#include<stdio.h>
int main()
{
    int t,b,c,k;
    scanf("%d",&t);
    int a[100005]={0};
    for(int i=2;i<=100000;i++)
    {
        if(a[i]==0)
        {
        for(int j=i;j<=100000;j+=i)
            a[j]++;
        }
    }
    while(t--)
    {
        scanf("%d%d%d",&b,&c,&k);
        long int sum=0;
        for(int i=b;i<=c;i++)
        {
            if(a[i]==k)
                sum++;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
