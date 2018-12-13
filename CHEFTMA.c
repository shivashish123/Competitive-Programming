#include<bits/stdc++.h>
using namespace std;
int dif[100001];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,m,x;
        scanf("%d%d%d",&n,&k,&m);
        int a[n],b[n],dif2[n];
        memset(dif,0,sizeof(dif));
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
            scanf("%d",&b[i]);
        for(int i=0;i<n;i++)
            dif2[i]=a[i]-b[i];
        for(int i=0;i<k;i++)
        {
            scanf("%d",&x);
            dif[x]++;
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&x);
            dif[x]++;
        }
        for(int i=0;i<n;i++)
        {
            if(dif2[i]>0)
            {if(dif[dif2[i]]>=1)
            {dif2[i]=0;
            dif[dif2[i]]--;
            }
            else
            {
                int j=dif2[i]-1;
                while(j>=1)
                {
                    if(dif[j]>=1)
                        {dif2[i]-=j;
                        dif[j]--;
                        break;
                        }
                    j--;
                }
            }
            }
        }
        long int sum=0;
        for(int i=0;i<n;i++)
            sum+=dif2[i];
        printf("%ld\n",sum);
    }
    return 0;
}
