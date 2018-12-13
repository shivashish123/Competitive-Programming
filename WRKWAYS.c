#include<bits/stdc++.h>
using namespace std;
bool check(int i,int n,long int c)
{
    long int pro=c;
    x=n;
    while(x>0)
    {
        while(pro%fact[i]!=0)
            i--;
        pro=pro/fact[i];
        ans[x--]=fact[i]+x;
        if(i!=fact.size() && (fact[i]==(fact[i+1]-1)))
            i++;
        if(i==0 || pro==1)
            break;
    }
    return (pro==1);
}
int ans[1000001],x;
vector<long int> f;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        f.clear();
        unsigned int n;long int c;
        scanf("%u%ld",&n,&c);
        if(n==1)
        {
            printf("%ld\n",c);
            continue;
        }
        for(int i=1;i*i<=c;i++)
        {
            if(c%i==0)
            {
                f.push_back(i);
                if(i!=(c/i))
                    f.push_back(c/i);
            }
        }
        sort(f.begin(),f.end());
        for(int i=0;i<fact.size();i++)
        {
            if(check(i,n,c))
                break;
        }
        for(int i=1;i<=x;i++)
            printf("%ld ",i);
        for(int i=x+1;i<=n;i++)
            printf("%ld ",ans[i]);
        printf("\n");
    }
    return 0;
}
