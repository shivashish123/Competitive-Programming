#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    bitset<31> a[n];
    int l;
    for(int i=0;i<n;i++)
        {scanf("%d",&l);
        a[i]=l;
        }
    int b[n][31];
    for(int i=0;i<31;i++)
    {
      for(int j=0;j<n;j++)
        {
          if(j==0)
            b[j][i]=a[j][i];
          else
            b[j][i]=a[j][i]+b[j-1][i];
        }
    }
    while(q--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        int x=0;
        int v=(r-l+1);
        int c;
        long int p=1;
        long int ans=2147483647;
        while(x<31)
        {
            c=b[r-1][x]-b[l-1][x];
            if(a[l-1][x])
                c++;
        //printf("\n");
        if(c>(v/2) && v&1)
            ans-=p;
        else if((!(v&1))&& c>=(v/2))
            ans-=p;
        x++;
        p=p<<1;
        //printf("%ld**%d\n",ans,c);
        }
        printf("%ld\n",ans);
    }
    return 0;
}
