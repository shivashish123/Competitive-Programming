#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s,b;
        cin>>s;
        int y=s.length();
        long int n;
        scanf("%ld",&n);
        for(int i=0;i<y;i++)
            b=b+s;
        long long int d1=0,d2=0;
        long long int d3,d4;
        long int dif;
        int fl=0;int gl=-1;
        long long int counta=0,countb=0;
        long long int ans;
        int j=0;
        for(int i=0;i<y*y;i++)
        {
            if(b[i]=='a')
                counta++;
            else
                countb++;
            if(counta>countb)
                {d1++;
                d2++;
                }
            if((i+1)%y==0 )
                j++;
            if(j==n)
                break;
            if((i+1)%y==0)
            {
                if(d2==0||d2==y)
                    {
                        gl=j;
                        break;
                    }
                else if(j==1)
                    d3=d1;
                else if(j==2)
                    d4=d1-d2;
                else if(j==3)
                {
                    if((d2-d4)==(d4-d3))
                        fl=1;break;
                }
                d2=0;
            }
        }
        if(gl>0)
        {
            ans=d1+(n-gl)*d2;
        }
        else if(fl==1)
        {
            ans=d3+(d4-d3)*(n-1);
        }
        else if(n>y)
        {
            ans=d1+d2*(n-y);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
