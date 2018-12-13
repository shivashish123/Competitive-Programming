#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p;
        scanf("%d%d",&n,&p);
        vector<vector<long long int>> v(n,vector<long long int>());
        v[0].push_back(1);
        v[0].push_back(1);
        for(int i=2;i<=n;i++)
        {
            long long int h=((v[i-2][0]%p)*(i%p))%p;
            v[i-1].push_back(h);
            for(int j=1;j<i;j++)
            {
                h=(((v[i-2][j]%p)*(i%p))%p+v[i-2][j-1]%p)%p;
                v[i-1].push_back(h);
            }
            v[i-1].push_back(1);
        }
            int count=0;
            for(int i=0;i<=n;i++)
            {
              printf("*%lld*",v[n-1][i]);
                if((v[n-1][i]%p)!=0)
                    count++;
            }
            printf("%d\n",count);
    }
    return 0;
}
