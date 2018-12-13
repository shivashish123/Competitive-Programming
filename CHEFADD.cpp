#include<bits/stdc++.h>
using namespace std;
int getNext(int n)
{
    int c = n;
    int c0 = 0;
    int c1 = 0;
    while (((c & 1) == 0) && (c != 0))
    {
        c0 ++;
        c >>= 1;
    }
    while ((c & 1)==1)
    {
        c1++;
        c >>= 1;
    }
    int p = c0 + c1;
    n |= (1 << p);
    n &= ~((1 << p) - 1);
    n |= (1 << (c1 - 1)) - 1;

    return n;
}
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        bitset<32> y;
        bitset<32> z,m;
        y=a;
        z=b;
        int j=y.count();
        int k=z.count();
        int an=0;
        int p=1;
        int l=1;
        while(l<=j)
        {
            an+=p;
            p=p*2;
            l++;
        }
        int ans=0;
        while(an<=c && an<=1e9)
        {
            int h=c-an;
            m=h;
            if(m.count()==k)
                ans++;
            an=getNext(an);
        }
        printf("%d\n",ans);
    }
}
