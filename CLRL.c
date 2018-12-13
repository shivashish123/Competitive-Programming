
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
        long long int a[1000001];
        for(long int ju=0;ju<x;ju++)
        {
            cin>>a[ju];
        }
        long int high=1000000,low=1;
        int flag=0;
        for(long int fu=0;fu<x-1;fu++)
        {
            if(a[fu]>r && high>a[fu])
                high=a[fu];
            else if(a[fu]<r && low<a[fu])
                low=a[fu];
            else if(high<a[fu] || low>a[fu])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
return 0;
}
