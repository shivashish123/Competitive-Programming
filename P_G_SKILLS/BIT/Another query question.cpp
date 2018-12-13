#include<bits/stdc++.h>
using namespace std;
int bits[100005]={0};
int n;
void update(int x,int delta)
{
    for(; x <= n; x += x&-x)
        bits[x] += delta;
}
int query(int x)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += bits[x];
     return sum;
}
int main()
{
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
       {
           cin>>a[i];
           update(i,a[i]);
           update(i+1,-a[i]);
       }
    int q,y,tm;
    cin>>q;
    while(q--)
    {
            cin>>y;
            cin>>tm;
            if(y==2)
            {
			int l=1,r=n;
			int mid=(l+r)/2,ans=-1;
			while(l<=r){
				mid = (l+r)/2;

				if(query(mid)>tm){
					r=mid-1;
				}
				else if(query(mid)==tm)
				{
				    ans=mid;
				    break;
				}
				else{
					l=mid+1;
				}
			}
			if(ans>=0){
				cout<<"yes\n";
			}
			else{
				cout<<"no\n";
			}
            }
            else
            {
                update(1,-1);
                update(tm+1,1);
            }
    }
    return 0;
}
