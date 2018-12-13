#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,k;
        scanf("%ld%ld",&n,&k);
        vector<long int> v;
        long int j=1;
        int size=0;
        while(j<=k)
        {
            v.push_back(j);
            size++;
            j=2*j;
        }
        long int o=n-size;
        if(o&1)
        {
            while(size!=n)
                {v.push_back(1);
                size++;
                }
        }
        else
        {
            while(size!=n)
            {
                v.push_back(k);
                size++;
            }
        }
        for(int i=0;i<n;i++)
            printf("%ld ",v[i]);
        printf("\n");
    }
    return 0;
}
