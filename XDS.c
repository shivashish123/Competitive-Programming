#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%ld",&n);
        int p;
        int r=floor(sqrt(n*1.0));
        int y=n/p;
        int rem=n%r;
        if(rem==0)
        {for(int i=0;i<p;i++)
            printf("X");
        for(int i=0;i<y;i++)
            printf("D");
        }
        else
        {
            for(int i=0;i<r;i++)
                printf("X");
            for(int i=0;i<(y-rem);i++)
                printf("D");
            printf("X");
            for(int i=0;i<rem;i++)
                printf("D");
        }
        printf("\n");
    }
    return 0;
}
