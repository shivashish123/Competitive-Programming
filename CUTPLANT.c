#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int fl=0;
        long int a[n],b[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        vector<long int> c;
        int check[n];
        memset(check,0,sizeof(check));
        for(int i=0;i<n;i++)
            {scanf("%ld",&b[i]);
            c.push_back(b[i]);
            if(b[i]>a[i])
                fl=1;
            if(b[i]==a[i])
                check[i]=1;
            }
        if(fl==1)
        {
            printf("-1\n");continue;
        }
        vector<long int>::iterator it;
        sort(c.begin(),c.end());
        it=unique(c.begin(),c.end());
        c.resize(distance(c.begin(),it));
        int j;
        long int ans=0;
        long int max1,min1;
        for(int i=c.size()-1;i>=0;i--)
        {
                j=0;
                while(j<n)
                {
                    if(b[j]==c[i] && check[j]==0)
                    {
                            check[j]=1;
                            max1=b[j];
                            min1=a[j];
                            ans++;
                        j++;
                        while(check[j]==0 && j<n)
                        {
                            max1=max(max1,b[j]);
                            min1=min(min1,a[j]);
                            if(max1>min1)
                                    {
                                        break;
                                    }
                            if(b[j]==c[i])
                            {
                                    check[j]=1;
                            }
                            j++;
                        }
                     }
                    else
                        j++;
                }
        }
        printf("%ld\n",ans);
    }
    return 0;
}
