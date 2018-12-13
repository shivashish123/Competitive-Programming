#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        int od=0,ev=0;
        long int sumo=0,sume=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i&1)
                {od++;
                sumo+=a[i];
                }
            else
                {ev++;
                sume+=a[i];
                }
        }
        if(sumo>sume)
        {
            printf("YES\n");
            continue;
        }
        int b[od],c[ev];
        int l=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(i&1)
                b[l++]=a[i];
            else
                c[m++]=a[i];
        }
        long int dif=sume-sumo;
        sort(b,b+od);
        sort(c,c+ev);
        long int dif2=0;
        for(int i=1;i<=k;i++)
        {
            dif2+=c[ev-i];
            dif2-=b[i-1];
        }
        dif2=dif2*2;
        if(dif2>dif)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
