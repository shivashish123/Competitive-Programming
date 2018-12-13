#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int x,y;
        scanf("%ld%ld",&x,&y);
        while(x>0 && y>0 && x!=y)
        {
            if(x>y)
                {
                    int h=x/y;
                    if(h>=2)
                        x=x-(h-1)*y;
                    else
                        x=x-y;
                }
            else
                {
                    int h=y/x;
                    if(h>=2)
                        y=y-(h-1)*x;
                    else
                        y=y-x;
                }
        }
        printf("%ld\n",(x+y));
    }
    return 0;
}
