#include<bits/stdc++.h>
using namespace std;
map <int long long,int long long> x;

long long int find(int long long key,int long long c)
{

    long long int mod=1000000007;
    if(key==1)
        return c;
    else if(key%2==0)
    {
        if(x.count(key))
            return x[key];
        else
            {
                x.insert(pair<long long int,long long int> (key,(2*find(key/2,c)*find(key/2,c))%mod-1));
                return x[key];
            }
    }
    else

        {
            if(x.count(a))
                return x[a];
            else
                {
                    x.insert(pair<long long int,long long int> (key,(2*find((key+1)/2,c)*find(key/2,c)-c)%mod));
                    return  x[a];
        }
    }


}
long long int Inverse(int long long a, int long long m)
{
    long long int m0 = m;
     long long int y = 0;
     long long int u=1;
    while (a > 1)
    {
         long long int q = a / m;
         long long int t = m;
        m = a % m, a = t;
        t = y;
        y = u - q * y;
        u = t;
    }
    if (u < 0)
       u += m0;

    return u;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        x.clear();
        long long int l,d;
        long long int t;
        long long int mod=1000000007;
        scanf("%lld %lld %lld",&l,&d,&t);
        long long int c=(d*Inverse(l,mod) % mod);
        long long int g=((find(t,c)*l)%mod+mod)%mod;
        printf("%lld\n",g);

    }
}

