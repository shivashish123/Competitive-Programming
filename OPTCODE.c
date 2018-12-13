#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int c=0;
        map<long int ,long int> v;
        while(n--)
        {
        long int x,y;
        scanf("%ld%ld",&x,&y);
        if(v.count(x))
        {
          if(v[x]<y)
              v[x]=y;
        }
        else
        {
            v.insert(pair<long int,long int>(x,y));
            c++;
        }
        }
        if(c<3)
            printf("0\n");
        else
        {
            vector<long int> h;
            for(map<long int ,long int>::iterator it=v.begin();it!=v.end();++it)
            {
                h.push_back(it->second);
            }
            sort(h.begin(),h.end());
            int s=h.size();
            long int sum=h[s-1]+h[s-2]+h[s-3];
            printf("%ld\n",sum);
        }

    }
    return 0;
}
