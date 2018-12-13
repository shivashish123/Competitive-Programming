#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=1,r=1000000;
    while(l!=r)
    {
        int mid=(l+r+1)/2;
        string s;
        printf("%d\n",mid);
        fflush(stdout);
        cin>>s;
        if(s=="<")
            r=mid-1;
        else
            l=mid;
    }
    printf("! %d\n",l);
    fflush(stdout);
}
