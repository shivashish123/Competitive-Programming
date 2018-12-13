#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,l;
        scanf("%d%d",&n,&k);
        char s[n+3];
        scanf("%s",s);
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            l=s[i]-96;
            float g=((l*1.0)/k*1.0);
            if(g>=1)
            {
                sum+=l;
                count++;
            }
        }
        int num=k*(n-2*count)+sum;
        int den=k;
        int h=__gcd(num,den);

        num=num/h;
        den=den/h;
        printf("%d %d\n",num,den);
    }
}
