#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    vector<long int> v;
    for(int i=0;i<n;i++)
    {
        int min=a[i];
        long int x=a[i];
        v.push_back(min*x);
        for(int j=i+1;j<n;j++)
        {
            if(min>a[j])
                min=a[j];
            x=x^a[j];
            v.push_back(x*min);
        }
    }
    sort(v.begin(),v.end());
    printf("%ld\n",v[k-1]);
    return 0;
}

