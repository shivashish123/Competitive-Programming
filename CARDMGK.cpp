#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        int fl=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                fl++;
        }
        if(fl<=1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
