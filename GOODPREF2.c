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
        long int y=s.length();
        long int n,count;
        scanf("%ld",&n);
        long long int counta=0,countb=0;
        long long int ans;
        int check[y];
        memset(check,0,sizeof(check));
        long int d1=0;
        for(int i=0;i<y;i++)
        {
            if(s[i]=='a')
                counta++;
            else
                countb++;
            if(counta>countb)
                {d1++;
                check[i]=1;
                }
        }
        if(counta==countb)
        {
            ans=d1*n;
        }
        else if(d1==y)
        {
            ans=d1*n;
        }
        else
        {
        ans=d1;
        if(counta>countb)
        {
            long int r=(min(y,n)-1);
            int count=0;
            int fl=0;
            while(r--)
            {
            for(int i=0;i<y;i++)
                {
                    if(s[i]=='a')
                        counta++;
                    else
                        countb++;
                    if(check[i]==0 && counta>countb)
                    {check[i]=1;
                    d1++;
                    }
                }
            ans+=d1;
            count++;
            if(d1==y)
                {fl=1;break;}
            }
            if(fl==1)
            ans+=(n-1-count)*y;
        }
        else if(countb>counta)
        {
            int r=(min(y,n)-1);
            int count=0;
            int fl=0;
            while(r--)
            {
            for(int i=0;i<y;i++)
                {
                    if(s[i]=='a')
                        counta++;
                    else
                        countb++;
                    if(check[i]==1 && counta<=countb)
                    {check[i]=0;
                    d1--;
                    }
                }
            ans+=d1;
            if(d1==0)
                break;
            }
        }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
