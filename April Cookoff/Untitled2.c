#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int k;
        long int n;
        bitset<33> a;
        scanf("%ld%ld",&n,&k);
        vector<long int> v;
        a=k;
        long int p=log2(k);
        long int j=pow(2,p);
        long int l=pow(2,p+1)-1;
        int size=1;
        v.push_back(k);
        long int sum=0;
        p--;
        if(n%2 && l>j)
        {
            while(p>=0)
            {
                if(a[p]==0)
                   {
                      v.push_back(j);
                      size++;
                      break;
                   }
                j=j/2;
                p--;
            }
            long int u=l-v[0]-v[1];
            if(u>0)
            {
                v.push_back(u);
                size++;
            }
        }
        else
        {
            long int u=l-j;
            if(u>0)
            {
                v.push_back(u);
                size++;
            }
        }
        for(int i=0;i<size;i++)
            printf("%ld ",v[i]);
        for(int i=size;i<n;i++)
            printf("1 ");
        printf("\n");
    }
    return 0;
}
