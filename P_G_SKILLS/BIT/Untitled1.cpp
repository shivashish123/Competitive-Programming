#include<bits/stdc++.h>
using namespace std;
int bits[100005];
int n;
void update(int x)
{
    for(; x <= n; x += x&-x)
        bits[x] += 1;
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
    int t;
    cin>>t;
    while(t--)
    {
    scanf("%d",&n);
    int a[n];int x1;
    int b[n+1];
    for(int i=0;i<n+2;i++)
        bits[i]=0;
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&x1);
      b[x1]=i+1;
    }
    long int sum1=0;
    for(int i=0;i<n;i++)
       {
           if(i!=0)
                sum1+=(i-query(b[a[i]]-1));
            update(b[a[i]]);
        }
    cout<<sum1<<endl;
    }
}
