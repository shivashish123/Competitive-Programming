#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
        vector<int> b;
    int ur=t;
    while(t--)
    {
        b.clear();
        char s[100005];
        scanf("%s",s);
        int y=strlen(s);
        int count=1;
        int check=0;
        if(s[0]==s[y-1])
            check=1;
        for(int i=0;i<y;i++)
        {
            if(s[i]==s[i+1])
                count++;
            else
            {
                if(i==y-1 && check==1)
                    {
                        if(b.size())
                        b[0]+=count;
                        else
                        b.push_back(count);
                    }

                else
                    b.push_back(count);
                count=1;
            }
        }
        sort(b.begin(),b.end());
        int u=b.size()-1;
        int h=b[u];
        printf("Case %d: ",(ur-t));
        if(u==0)
        {
            if(h>1)
            printf("%d\n",(h-1));
            else
            printf("1\n");
        }
        else if(h==1 && u==1)
        {
            printf("2\n");
        }
        else if(h==1)
        {
            printf("3\n");
        }
        else if(h==2)
            {
                if(b[0]==2)
                    printf("3\n");
                else
                    printf("2\n");
            }
        else
        {
            int r=max(h/2,b[u-1]);
            printf("%d\n",r);
        }

    }
    return 0;
}
