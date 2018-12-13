#include<bits/stdc++.h>
using namespace std;
vector<pair<string,int>> fr[8];
void permute(string str)
{
	int l=str.len();
	do {
        int c=0;
	for(int i=0;i<l-1;i++)
    {
        if(str[i]<str[i+1])
            c++;
    }
	fr[l-1].push_back(make_pair(str,c);
	} while (next_permutation(str.begin(), str.end()));
}
int main()
{
    int t,n,k;scanf("%d",&t);
	string str;
	for(int i=1;i<=8;i++)
	{
	    str+=char(i+48);
	    permute(str);
	}
    while(t--)
    {
        scanf("%d%d",&n,&k);
        int x;
        string h;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            h=h+char(x+48);
        }
        int u=fr[n-1].size();
        int sum=0;
        for(int i=0;i<u;i++)
        {
            if(fr[n-1][i].second==k)
            {
                int fl=0;
                for(int j=0;j<n;j++)
                {
                    if(fr[n-1][i].first[j]!=h[j] && h[j]!='0')
                    {
                        fl=1;break;
                    }
                }
                if(fl==0)
                    sum++;
            }
        }
        printf("%d\n",sum);
    }
	return 0;
}

