#include<bits/stdc++.h>
using namespace std;
int b[101];
void update(int x)
{
    for(; x <= n; x += x&-x)
        b[x] += 1;
}
int query(int x)
{
     int sum = 0;
     for(; x > 0; x -= x&-x)
        sum += b[x];
     return sum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum1=0;
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(i!=0)
                sum1+=query(a[i]);
            update(a[i]);
        }
    cout<<sum1<<endl;
}
