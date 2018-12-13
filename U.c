#include<stdio.h>
int diff(int tem)
{
    int a=0,b=0;
            while(tem>0)
            {
              ti=tem%10;
                if((ti)!=0)
                {
                if((ti)&1)
                a+=ti;
                else
                b+=ti;
                }
                tem=tem/10;
            }
    return abs(a-b);
}
int main()
{
    int t;
    scanf("%d",&t);
    long int a[1000001];
    for(int i=1;i<=1000000;i++)
    {
        int y=1;
        int j=2;
        int k=2*i;
         long int sum=0;
        while(y<i)
        {
            sum+=y*(dif(j)+dif(k));
            y++;j++;k--;
        }
        sum+=y*dif(j);
        a[i]=sum;
    }
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d",a[n]);
    }
    return 0;
}
