#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int h=(n*(n+1))/2;
        int flag=0;
        if((h+m)&1 || (h-m)&1)
            flag=1;
        else
        {
            int a=(h+m)/2;
            int b=(h-m)/2;
            int h=__gcd(a,b);
            if(h!=1)
                flag=1;
        }
        if(flag==1)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
