#include<bits/stdc++.h>
using namespace std;
int find(int a[],int ser,int left,int right)
{
    if(right>left)
        return 0;
    int mid=(left+right)/2;
    if(a[mid]==ser)
        return 1;
    if(a[mid]>ser)
        return find(a,ser,left,mid-1);
    return find(a,ser,mid+1,right);
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    vector<int> b;
    vector<int> c;
    vector<string> h;
    while(m--)
    {
    int x,y;
    string s;
    scanf("%d%d",&x,&y);
    cin>>s;
        b.push_back(x);
        c.push_back(y);
        h.push_back(s);
    }
    int min;
    int u=b.size();
     for(int i=0;i<u-1;i++)
    {
        min=i;
        for(int j=i+1;j<u;j++)
        {
            if(c[j]<c[min])
            {
                min=j;
            }
        }
        swap(c[i],c[min]);
        swap(b[i],b[min]);
        swap(h[i],h[min]);
    }
    for(int i=u-1;i>=0;i--)
    {
        if(find(a,b[i],0,n-1)==1)
        cout<<b[i]<<"*"<<c[i]<<h[i]<<endl;
    }
    for(int i=u-1;i>=0;i--)
    {
        if(find(a,b[i],0,n-1)==0)
        cout<<b[i]<<"#"<<c[i]<<h[i]<<endl;
    }
    return 0;
}
