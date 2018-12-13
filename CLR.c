
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int u=0;u<test;u++)
    {
        long int x,r;
        cin>>x>>r;
        int long long a[1000001];
        int long long b[1000001],c[1000001];
        int p=0,h=0;
        for(int ju=0;ju<x;ju++)
        {
            cin>>a[ju];
            if(a[ju]>r)
            {
                b[h]=a[ju];
                h++;
            }
            else if(a[ju]<r)
            {
                c[p]=a[ju];
                p++;
            }
        }
        int flag=0,flag1=0;
        for(int j=0;j<h-1;j++)
        {
            if(b[j]<b[j+1])
            {
                flag=1;
                break;
            }
        }
        for(int fu=0;fu<p;fu++)
        {
            if(c[fu]>c[fu+1])
            {
                flag1=1;
                break;
            }
        }
        if(flag1==1||flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
