#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10000];
        scanf("%s",s);
        int a[26]={0};
        int b[26]={0};
        int space=0;
        int y=strlen(s);
        int fl=0;
        for(int i=0;i<y;i++)
        {
            if(s[i]>=65 && s[i]<=90)
                a[s[i]-65]++;
            else if(s[i]>=97 && s[i]<=122)
                b[s[i]-97]++;
            else if(s[i]==32)
                space++;
        }
        for(int i=0;i<26;i++)
        {
           if(a[i]==0)
           {
            printf("%c\n",(i+65));
            fl=1;break;
           }
        }
        if(fl==0)
        {
            for(int i=0;i<26;i++)
            {
           if(b[i]==0)
           {
            printf("%c\n",(i+97));
            fl=1;break;
           }
            }
        }
        if(fl==0 && space==0)
        {
            printf(" \n");
            fl=1;
        }
        if(fl==0)
            printf("~\n");
    }
    return 0;
}
