#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    vector<long int> v1,v2;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[n];
        for(int i=0;i<n;i++)
            scanf("%ld",&a[i]);
        int b[n];
        memset(b,0,sizeof(b));
        int k=1;
        int days=1;
        while(k)
        {
            k=0;
            for(int i=0;i<n;i++)
            {
                int pre=-1,post=-1;
                    if(i!=0 && i!=n-1 && b[i]==0)
                    {
                        for(int j=i-1;j>=0;j--)
                        {
                            if(b[j]==0)
                            {
                                pre=a[j];break;
                            }
                        }
                        for(int j=i+1;j<n;j++)
                        {
                            if(b[j]==0)
                            {
                                post=a[j];break;
                            }
                        }
                        if(post==-1 || pre==-1)
                            break;
                        else
                        {
                            k=1;
                            if(post>a[j] && pre>a[j])
                                b[j]=days;
                        }

                    }
            }
            days++;
        }
    }
    return 0;
}
