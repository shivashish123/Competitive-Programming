#include<bits/stdc++.h>
using namespace std;
int pal(char s[],int j)
{
        int fl=0;
        for(int i=0;i<j/2;i++)
        {
        if(a[i]!=a[j-i-1])
            fl=1;break;
        }
        if(fl==0)
            return 1;
        else
            return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    char s[300000];
    while(t--)
    {
        scanf("%s",s);
        int y=strlen(s);
        char temp;
        long int ans=0;
        for(int i=0;i<y;i++)
        {
            temp=s[0];
            for(int j=1;j<y;j++)
                s[j-1]=s[j];
            s[y-1]=temp;
            if(pal(s,y))
                ans++;
        }
        printf("%ld\n",ans);
    }
}
