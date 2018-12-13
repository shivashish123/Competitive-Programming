#include<bits/stdc++.h>
using namespace std;
int arr[50010];
struct value{
    long int prefix,suffix,sum,maxsum;
};
value a[4*50010];
void build(int n)
{
    for (int i=0; i<n; i++)
        {a[n+i].prefix = arr[i];
        a[n+i].suffix = arr[i];
        a[n+i].sum = arr[i];
        a[n+i].maxsum = arr[i];
        }
    for(int i=n-1;i>=0;i--)
    {
        a[i].maxsum = max(max(a[2*i+1].maxsum,a[2*i+2].maxsum),
                     a[2*i+1].suffix + a[2*i+2].prefix);
        a[i].prefixsum = max(a[2*i+1].prefix,
                        a[2*index+1].sum + a[2*i+2].prefix);
        a[i].suffixsum = max(a[2*i+2].suffix,
                        a[2*i+2].sum + a[2*i+1].suffix);
        a[i].sum = a[2*i+1].sum + a[2*i+2].sum;
    }
}
node query(int left,int right,int l,int r,int pos)
{
    node result;
    result.prefix=result.suffix=result.sum=result.maxsum=INT_MIN;
    if(left<l || right>r)
        return result;
    if(left>=l && right<=r)
        return a[node];
    int mid=(left+right)/2;
    if(l>mid)
    {
        return query(mid+1,right,l,r,2*pos+2)
    }
    if(r<=mid)
        return query(left,mid,l,r,2*pos+1);
    node ll = query(left,mid,l,r,2*pos+1);
    node rr = query(mid+1,right,l,r,2*pos+2);

   result.sum = left.sum + right.sum;
   result.prefix =
      max(left.prefix, left.sum + right.prefix);
   result.suffix =
      max(right.suffix, right.sum + left.suffix);
   result.maxsum =
      max(result.prefix,
         max(result.suffix,
            max(left.maxsum,
               max(right.maxsum,
                  left.suffix + right.prefix))));
   return result;

}
int main()
{
    int n,m,a,b;
   scanf("%d",&n);
    for(int i=0;i<n;++i)
      scanf("%d",&arr[i]);
   build(n);
    scanf("%d",&m);
    while(m--)
   {
      scanf("%d%d",&a,&b);
      printf("%d\n",query(0,n-1,a-1,b-1,0).maxsum);
   }
   return 0;

}
