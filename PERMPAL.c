#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      string a;
      cin>>a;

    vector<vector<int>> v (26,vector<int>());
     int y=a.length();
     int arr[y];
    for(int i=0;i<y;i++)
        v[a[i]-97].push_back(i);
        int check=0;
        int x;
    for(int i=0;i<26;i++)
        {
            if((v[i].size())&1)
            {check++;
            }
            if(check>1)
                break;
        }
        if(check>1)
        {
            printf("-1\n");
            continue;
        }

    int p=1;
    for(int i=0;i<26;i++)
    {
      if((v[i].size())>0)
      {
        if((v[i].size())&1)
        {
            int u=(v[i].size())/2;
            int r=(v[i].size());
            arr[y/2]=v[i][u]+1;
            for(int j=0;j<u;j++)
            {
                arr[p-1]=v[i][j]+1;
                arr[y-p]=v[i][r-j-1]+1;
                p++;
            }
        }
        else
        {
            int u=(v[i].size())/2;
            int r=(v[i].size());
            for(int j=0;j<u;j++)
            {
                arr[p-1]=v[i][j]+1;
                arr[y-p]=v[i][r-j-1]+1;
                p++;
            }
        }
      }
    }
    for(int i=0;i<y;i++)
        printf("%d ",arr[i]);
    printf("\n");
    }
    return 0;
}
