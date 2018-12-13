#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000000];
        vector<int> one;
        scanf("%s",s);
        int y=strlen(s);
        int l=0;
        for(int i=0;i<y;i++)
        {
            if(s[i]=='1')
                {one.push_back(i);
                l++;
                }
        }
        one.push_back((one[0]+y));
        if(l==1)
        {
            printf("0\n");
            continue;
        }
        long int min=1000000000;
        long int sum;
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<l;j++)
            { sum=0;
                if(j!=i)
                {
                    sum+=fabs(v[j]-v[i]+j-1)-1;
                }
            }
            if(sum<min)
                min=sum;
        }

    }
    return 0;
}
