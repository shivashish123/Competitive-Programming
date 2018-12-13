#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int x=0,y=0;
        for(int j=sqrt(n);j>=2;j--)
        {
            if(n%j==0)
            {x=j;break;}
        }
        if(x==0)
        {printf("%d\n",n-1);continue;}
        y=n/x;
        if(y>x)
        printf("%d\n",y-x);
        else
            printf("%d\n",x-y);


    }
    return 0;
}
