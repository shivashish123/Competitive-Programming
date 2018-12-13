#include<bits/stdc++.h>
using namespace std;
int construct_again(int *st,int arr[],int start,int end,int node)
{
    if(start==end);
    {
        st[node]=arr[start];
        return st[node];
    }
    int mid=(start+end)/2;
    st[node]=construct_again(st,arr,start,mid,2*node+1)+construct_again(st,arr,mid+1,end,2*node+2);
    return st[node];
}
int *construct(int arr[],int n)
{
    int h=(int)(ceil(log2(n)));
    int g=2*(int)pow(2,h)-1;
    int *st=new int[g];
    construct_again(st,arr,0,n-1,0);
    return st;
}
int getsum(int *st,int start,int end,int node,int original_start,int original_end)
{
    if(start>=original_start &&  end<=original_end)
        return st[node];
    if(start<original_start &&  end>original_end)
        return 0;
    int mid=(original_start+original_end)/2;
    return getsum(st,start,end,2*node+1,original_start,mid)+getsum(st,start,end,2*node+2,mid+1,original_end);
}
void update(int *st,int start,int end,int i,int dif,int node)
{
    if(i<start || i>end)
        return;
    st[node]+=dif;
    if(start!=end)
    {
        int mid=(start+end)/2;
        update(st,start,mid,i,dif,2*node+1);
        update(st,mid+1,end,i,dif,2*node+2);
    }
}
int main()
{
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the array:"<<endl;
for(int i=0;i<n;i++)
    cin>>a[i];
int m;
cout<<"Enter the number of queries:"<<endl;
cin>>m;
int *st=construct(a,n);
for(int i=0;i<30;i++)
  cout<<st[i]<<" ";
cout<<endl;
while(m--)
{
    int l;
    cin>>l;
    if(l==0)
    {
        int left,right;
        cin>>left>>right;
        int sum=getsum(st,left,right,0,0,n-1);
        cout<<sum<<endl;
    }
    if(l==1)
    {
        int pos,value;
        cin>>pos>>value;
        int dif=value-a[pos];
        update(st,0,n-1,pos,dif,0);
        a[pos]=value;
        for(int i=0;i<30;i++)
  cout<<st[i]<<" ";
cout<<endl;
        cout<<"Updated"<<endl;
    }
}
return 0;
}
