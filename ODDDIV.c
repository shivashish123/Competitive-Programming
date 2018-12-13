#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    unsigned long int a[100002]={0};
    for(int i=1;i<100000;i+=2)
    {
        for(int j=i;j<=100000;j+=i)
          a[j]+=i;
    }
    while(t--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        unsigned long int x=0;
        for(int i=l;i<=r;i++)
            x+=a[i];
        printf("%lu\n",x);
    }
    return 0;
}
