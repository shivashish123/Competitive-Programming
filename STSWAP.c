#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    vector<int> a,b;
    int x;
    int check[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        a.push_back(x);
        check[i]=0;
    }
    if(k<(n/2))
    {
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
         if(i<=k && i>=(n-1-k))
                    {
                        check[i]=1;
                    continue;}
         else
         {
             b.push_back(a[i]);
         }
        }
        sort(b.begin(),b.end());
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(check[i])
                printf("%d ",a[i]);
            else
                printf("%d ",b[j++]);
        }

    }
    return 0;
}
