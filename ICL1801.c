#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n*m];
        int p=0;
        int x=0,y=0;
        for(int i=0;i<n*m;i++)
        {
               scanf("%d",&a[i]);
        }
        sort(a,a+n*m);
        for(int i=0;i<n*m;i++)
        {
            if(i&1)
                x+=a[i];
            else
                y+=a[i];
        }
        if(y>x)
            printf("Cyborg\n");
        else
            printf("Draw\n");
    }
}
