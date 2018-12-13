#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        {long long int a,b,c,d;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        unsigned long long int ans;
        if(a>=d)
            ans=0;
        else if(b<c)
            ans=(b-a+1)*(d-c+1);
        else if(a<=c && b>=c && b<=d)
            ans=((c-a)*(b-c+1))+((b-c+1)*(b-c))/2+((d-b)*(b-a+1));
        else if(a>=c && b>=d && a<d)
            ans=((d-a)*(d-a+1))-((d-a)*(d-a+1)/2);
        else if(a>=c && b<=d)
            ans=((d-a)*(b-a+1))-(((b-a)*(b-a+1))/2);
        else if(c>=a && d<=b)
            ans=(d-c)*(d-c+1)/2;

        printf("%llu\n",ans);
        }
    return 0;
}
