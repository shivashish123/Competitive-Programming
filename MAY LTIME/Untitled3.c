#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    char s[10000];
    while(t--)
    {
        int n;
        scanf("%s",s);
        scanf("%d",&n);
        int y=strlen(s);
        int c[y][26];
        memset(c,0,sizeof(c));
        for(int i=0;i<y;i++)
        {
            if(i==0)
            c[i][s[i]-97]++;
            else
            {
                for(int j=0;j<26;j++)
                    c[i][j]=c[i-1][j];
                c[i][s[i]-97]++;

            }
        }
        long int ans=0;
        for(int i=0;i<y;i++)
        {
            for(int j=i;j<y;j++)
            {

                if(i==0)
                {
                    int fl=0;
                    int check=-1;
                    int check2=0;
                    for(int k=0;k<26;k++)
                    {
                        int h=c[j][k];
                        if(h>0)
                            check2++;
                        if(check==-1)
                            check=h;
                        else if(check!=h && h>0)
                        {
                            fl=1;break;
                        }
                    }
                    if(fl!=1 && check2==n)
                        ans++;
                }
                else
                {
                    int fl=0;
                    int check=-1;
                    int check2=0;
                    for(int k=0;k<26;k++)
                    {
                        int h=c[j][k]-c[i-1][k];
                        if(h>0)
                            check2++;
                        if(check==-1)
                            check=h;
                        else if(check!=h && h>0)
                        {
                            fl=1;break;
                        }
                    }
                    if(fl!=1 && check2==n)
                        ans++;
                }
            }

        }
        printf("%ld\n",ans);

    }
    return 0;
}
