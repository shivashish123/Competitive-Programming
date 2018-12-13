#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        long int check;
        int gl=0;
        for(int i=0;i<n-2;i++)
        {
            if((a[i+1]-a[i])!=1)
            {
                check=a[i];
                gl=1;break;
            }
        }
        if(gl==0)
        {
            check=a[n-1];
        }
        printf("%ld\n",check);
    }
    return 0;
}
