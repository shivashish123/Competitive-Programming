#include<stdio.h>
#include<string.h>
#define mod 10000009
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[1000002];
        scanf("%s",&a);
        long int c=1;
        int fl=1;
        if(strlen(a)==1)
        {
            if(a[0]=='?')
                c=26;
            else
                c=1;
        }
        else
        {
            int y=strlen(a);
            for(int j=0;j<y/2;j++)
                {
                    if(a[j]!=a[y-j-1] && a[j]!='?' && a[y-j-1]!='?')
                    {
                        fl=0;break;
                    }
                    else if(a[j]=='?' && a[j]==a[y-j-1])
                        c=(c*26)%mod;

                }
            if(y%2==1)
            {
                if(a[y/2]=='?')
                    c=(c*26)%mod;
            }
        }
        if(fl==0)
            c=0;
        printf("%ld\n",c);
    }
    return 0;
}
