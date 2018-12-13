#include<bits/stdc++.h>
using namespace std;
int least_prime[1000001];
int tree[200005];
void build( int arr[],int n)
{
    for (int i=0; i<n; i++)
        tree[n+i] = least_prime[arr[i]];
    for (int i = n - 1; i > 0; --i)
        tree[i] = max(tree[i<<1],tree[i<<1 | 1]);
}
void updateTreeNode(int p, int value)
{
    tree[p+n] = tree[p+n];
    p = p+n;

    // move upward and update parents
    for (int i=p; i > 1; i >>= 1)
        tree[i>>1] = tree[i] + tree[i^1];
}
int main()
{
    int t;
    scanf("%d",&t);
    memset(least_prime,0,sizeof(least_prime));
    least_prime[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;
            for (int j = 2*i; j <= 1000000; j += i)
                if (least_prime[j] == 0)
                   least_prime[j] = i;
        }
    }
    while(t--)
    {int n,q;
    scanf("%d%d",&n,&q);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    build(a,n);
    while(q--)
    {
        int x,l,r;
        scanf("%d",&x);
        if(x==0)
            {
                scanf("%d",)
            }
    }
    }
    return 0;
}
