#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        int r=s.length();
        vector<int> v;
        int fl=0;
        for(int i=0;i<r;i++)
        {
            if(s[i]!='.')
            {
                v.push_back(i);
            }
        }
        int r1=v.size();
        for(int i=0;i<r1-1;i++)
        {
            int u1=s[v[i]]-48;
            int u2=s[v[i+1]]-48;
            if((v[i+1]-v[i])<=(u1+u2))
            {
                fl=1;break;
            }
        }
        if(fl==0)
            cout<<"safe\n";
        else
            cout<<"unsafe\n";
    }
}
